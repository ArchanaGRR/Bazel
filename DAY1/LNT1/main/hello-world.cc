
#include<string>

#include<iostream>

std::string get_msg(const std::string& name){

    return "Hello "+ name;

}

int main(int argc, char** argv){

    std::string name = "LNT";

    if(argc>1)

    {

        name=argv[1];

    }

    std::cout << get_msg(name);

    return 0;

}