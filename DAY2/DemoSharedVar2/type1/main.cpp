
#include <iostream>
int main (int argc, char** argv)
{
    for (int i=0; i<argc; ++i)
    {
        std::cout<<"argumrnt " <<i<<argv[i] <<std::endl;
    }


if (argc>1)
{
    std::string sharedVariable = argv[1];
    std::cout<< "Shared variable:" <<sharedVariable <<std::endl;
}
}