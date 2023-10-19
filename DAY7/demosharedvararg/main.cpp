#include<iostream>
#include<cstdlib>

int main(int argc, char* argv[])
{
    if(argc != 2)
    {
        std::cerr << "Usage: " <<argv[0] << "<value>";
    }
    std:: cout << "Value from the ecommand-line arguments: "<<argv[1];
    return 0;
}