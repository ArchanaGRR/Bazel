#include <iostream>
#include <cstdlib>

int main()
{
    const char* sharedvaribale = std::getenv("My_Variable");
    if (sharedvaribale)
    {
        std::cout<<"shared Envi Var is :" <<sharedvaribale<<std::endl;
    }
    else
    {
        std::cout<<"shared var in env is not set"<<std::endl;
    }
    return 0;
}