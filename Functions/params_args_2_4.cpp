#include<iostream>
#include<cstdlib> // for EXIT_SUCCESS and EXIT_FAILURE

float get_number()
{
    float num{};
    std::cout<<"Enter a number:\n";
    std::cin>>num;

    return num;
}

float multiply(float a, float b)
{
    return a*b;
}

float get_squared(float num)
{
    return num *num;
}
void aboutParams_Args()
{
    std::cout<<"Parameters are variables that are used in a function definition."<<std::endl;
    std::cout<<"Arguments are the actual values that are passed to the function when it is called."<<std::endl;

    std::cout<<"In some cases, parameters are unreferenced, meaning they are not used in the function body."<<std::endl;
    std::cout<<"Params can be unnamed, but it is not recommended."<<std::endl;
    std::cout<<"params may contain default values, which are used if no argument is provided."<<std::endl;
    
}
int main()
{
    std::cout<<"Not the loop I wanted but oh well!\n";
    for(int i=0;i<2;i++)
    {
        float num1{get_number()};
        float num2{get_number()};
        float result{multiply(num1, num2)};
        std::cout<<"The result of "<<num1<<" * "<<num2<<" is: "<<result<<std::endl;
    }
    std::cout<<"Executing get squared function.\n"<<std::endl;
    std::cout<<get_squared(get_number())<<std::endl;

    return 0;
}