#include<iostream>
#include<thread>
#include<atomic>

std::atomic<int> shared_variable(0);

void increment_shared_variable(int n){
    for (int i=0; i<n; i++){
    shared_variable.fetch_add(1, std::memory_order_relaxed);
    }
}

int main()
{
    const int num_threads = 4;
    const int itration_per_thread = 100000;
    std::thread threads[num_threads];
    for (int i=0;i<num_threads;i++)
    {
        threads[i]= std::thread(increment_shared_variable,itration_per_thread);
    }
    for(int i=0; i<num_threads; i++)
    {
        threads[i].join();
    
    }
    std::cout<<"shared variable value:" <<shared_variable.load();
    return 0;

    }