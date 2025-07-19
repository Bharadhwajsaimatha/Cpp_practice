#include <iostream>

void data_types()
{
    // floating point types
    std::cout<<"Float:"<<sizeof(float)<<" bytes"<<std::endl;
    std::cout<<"Double:"<<sizeof(double)<<" bytes"<<std::endl;
    std::cout<<"Long double:"<<sizeof(long double)<<" bytes"<<std::endl;

    // integral types
    std::cout<<"Char:"<<sizeof(char)<<" bytes"<<std::endl;
    std::cout<<"Boolean:"<<sizeof(bool)<<" bytes"<<std::endl;

    //forms of char
    std::cout<<"Signed char:"<<sizeof(signed char)<<" bytes"<<std::endl;
    std::cout<<"Unsigned char:"<<sizeof(unsigned char)<<" bytes"<<std::endl;
    std::cout<<"wchar_t:"<<sizeof(wchar_t)<<" bytes"<<std::endl;
    std::cout<<"char16_t:"<<sizeof(char16_t)<<" bytes"<<std::endl;
    std::cout<<"char32_t:"<<sizeof(char32_t)<<" bytes"<<std::endl;

    //integer types
    std::cout<<"Int:"<<sizeof(int)<<" bytes"<<std::endl;
    std::cout<<"short int:"<<sizeof(short)<<" bytes"<<std::endl;
    std::cout<<"long int:"<<sizeof(long)<<" bytes"<<std::endl;
    std::cout<<"long long int:"<<sizeof(long long)<<" bytes"<<std::endl;
    std::cout<<"unsigned int:"<<sizeof(unsigned int)<<" bytes"<<std::endl;
    std::cout<<"unsigned short int:"<<sizeof(unsigned short)<<" bytes"<<std::endl;
    std::cout<<"unsigned long int:"<<sizeof(unsigned long)<<" bytes"<<std::endl;
    std::cout<<"unsigned long long int:"<<sizeof(unsigned long long)<<" bytes"<<std::endl;

    // nullptr_t and void
    std::cout<<"nullptr_t:"<<sizeof(std::nullptr_t)<<" bytes"<<std::endl;
    // std::cout<<"void:"<<sizeof(void)<<" bytes (size of void is not defined)"<<std::endl;
    // Note: sizeof(void) is invalid - void is an incomplete type with no defined size
    

}

int main()
{
    std::cout << "Data Types Size:" << std::endl;
    data_types();
    return 0;
}