#include <iostream>

int uninitialised_variables()
{
    int a{};
    std::cout<<"Uninit variable a declared with list-initialization: "<<a<<std::endl;
    int b;
    std::cout<<"Uninit variable b declared without initialization: "<<b<<std::endl;

    // Undefined Behavior
    
    return 0;
}

int key_words_identifiers()
{
    std::cout<<"C++ has 92 keywords as of C++23"<<std::endl;
    std::cout<<"Name of function, variable or class is called an identifier"<<std::endl;
    std::cout<<"Better to have snake case for variable and camel case for functions and classes"<<std::endl;

    return 0;

}

bool whiteSpace_Formatting()
{
    std::cout<<"Characters used for formatting are referred to as white space"<<std::endl;
    std::cout<<"White space characters include: space, tab, newline, form feed, vertical tab"<<std::endl;
    std::cout<<"White space is ignored by the compiler except for separating tokens"<<std::endl;
    std::cout<<"Quoted text takes the amount of whitespace literally"<<std::endl;
    std::cout<<"Quoted text separated by whitespace will be concatenated"<<std::endl;
    std::cout<<"Example: \"Hello\" \"World\" will be concatenated to \"Hello World\""<<std::endl;
    std::cout<<"Typically 80 characters is the maximum line length for readability"<<std::endl;
    return true;

}

int literalsOperators()
{
    std::cout<<"Literaks are fixed values in the code"<<std::endl;
    //for example:
    int x{10};
    std::cout<<"Printing 5 -> "<<5<<std::endl<<"This 5 can be printed directly"<<std::endl;
    std::cout<<"Printing x -> "<<x<<std::endl<<"This x is a variable and can be changed"<<std::endl;
    std::cout<<"The value of 10 from x has to be fetched from memory location assigined to the variable x"<<std::endl;

    std::cout<<"Number of operands an operator takes is called arity"<<std::endl;
    std::cout<<"Operators that observable  effect beyond producing a return value are called side-effecting operators"<<std::endl;
    std::cout<<"Side effect means not as in common language but an observable change"<<std::endl;
    std::cout<<"Operators that do not have side effects are called pure operators"<<std::endl;
    
    return 0;
}

void expressions()
{
    std::cout<<"Expression is a non-empty sequence of literals, variables, operators and function calls that evaluates to a value"<<std::endl;
    std::cout<<"Expressions can be used in statements, for example: int x = 5 + 10;"<<std::endl;
    std::cout<<"Expressions can be used in control flow statements, for example: if (x > 10) { ... }"<<std::endl;
    std::cout<<"Expressions dont need to end with a semicolon, but statements do"<<std::endl;

}

int sampleProgram()
{
    int num{};
    std::cout<<"Enter a number: \t";
    std::cin>>num;
    std::cout<<"Doouble the number is: "<<num *2<<std::endl;
    return 0;
}

int main()
{
    std::cout<<" Lessons 1.6, 1.7 and 1.8"<<std::endl;
    uninitialised_variables();
    key_words_identifiers();
    whiteSpace_Formatting();
    return 0;
}