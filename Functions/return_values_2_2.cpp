#include<iostream>
#include<cstdlib> // for EXIT_SUCCESS and EXIT_FAILURE

int get_number()
{
    int number{};
    std::cout<<"Enter a number:"<<std::endl;
    std::cin>>number;

    return number;
}

int double_number(int number)
{
    return number * 2;
}

void info_on_main()
{
    std::cout<<"In  C++ main() function is not callable."<<std::endl;
    std::cout<<"Some compliers allow main() to be called, but it is not standard. This is to maintain compatibility with C"<<std::endl;
    std::cout<<"Main functio is not always executed first, but it is the entry point of the program."<<std::endl;
    std::cout<<"before main(), global variables are initialized, static variables are initialized, and constructors of global objects are called."<<std::endl;
    std::cout<<"If global variable instialization involves any function calls, those functions are executed before main()."<<std::endl;
    std::cout<<"The return value of main() which is an integer, is used to indicate the success or failure of the program."<<std::endl;
    std::cout<<"A return value of 0 typically indicates success, while a non-zero value indicates an error or abnormal termination."<<std::endl;

}

int main()
{
    int num{get_number()};
    int doubled{double_number(num)};
    std::cout<<"The original number is: "<<num<<std::endl;
    std::cout<<"The doubled number is: "<<doubled<<std::endl;
    info_on_main();
    std::cout<<"A value returning function that doesn not return a value will produce undefined behavior."<<std::endl;
    std::cout<<"Functions may implicitly return 0 if no return statement is present, but this is not guaranteed."<<std::endl;


    return EXIT_SUCCESS; // or return 0;
    // return EXIT_FAILURE; // Uncomment this line to indicate failure
}