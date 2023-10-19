#include "hello-greet.h"
#include<string>
std::string get_msg(const std::string& name){
    return "Hello "+ name;
}