#include <iostream>

int add(int, int); // Forward declaration of the function

int main()
{
    std::cout<<"The compiler compiles the code line by line and checks for errors in each line before moving to the next one.\n";
    std::cout<<"If a function is defined after it is called, the compiler will not know about it at the time of the call.\n";
    std::cout<<"One way is to reorder the code so that the function is defined before it is called.\n But if funcA depends on funcB, and funcB depends on funcA, then we have a circular dependency.\n";

    std::cout<<"In such cases, we can use forward declarations to inform the compiler about the existence of a function before it is defined.\n";

    int a{}, b{};
    std::cout<<"Enter two numbers:\n";
    std::cin>>a>>b;
    std::cout<<"The sum of "<<a<<" and "<<b<<" is "<<add(a,b)<<std::endl;

    std::cout<<"If we forward declare a function and do not define it, the compiler will not know how to execute it, and we will get a linker error.\n";
    std::cout<<"In C++ all definitions are declarations \n";

    std::cout<<"One Definition Rule (ODR) states that a function can be defined only once in a program.\n";

    return 0;
}

int add(int a, int b)
{
    return a+b;
}