#include "lib/hello-time.h"
#include "main/hello-greet.h"
#include<string>
#include<iostream>
int main(int argc, char** argv){
    std::string name = "LNT";
    if(argc>1)
    {
        name=argv[1];
    }
    std::cout << get_msg(name);
    print_localtime();
    return 0;
}