#include<iostream>

void printMessage()
{
    std::cout<<"A function is a block of code that performs a specific task."<<std::endl;
    std::cout<<"Function contains a returnType, a name, arguments and a body with curled braces which contains the code to be executed."<<std::endl;
}
int main()
{
    std::cout<<"This is starting of main"<<std::endl;
    printMessage();
    std::cout<<"In C++ nested functions are not allowed."<<std::endl;
    std::cout<<"This is end of main"<<std::endl;
    return 0;    
}