#include <iostream>
#include "calci.h"

#define USE_CALCULATOR

void about_headers()
{
    std::cout<<"Usually header files contain class declarations, function prototypes, constants, macros, and other declarations.\n";
    std::cout<<"Including a header file from different directories can be done using relative or absolute paths. But it is not recommendded \n";
    std::cout<<"Instead use the include path option of the compiler to specify directories where header files are located.\n";

    std::cout<<"using g++ you can use the -I option to specify include directories.\n";
    std::cout<<"For example: g++ -I/path/to/headers main.cpp\n";
    std::cout<<"For VS Code, you can set the include path in the c_cpp_properties.json file.\n";

    std::cout<<"Transitive header inclusion means that if a header file includes another header file, the contents of the second header file are also available to any file that includes the first header file.\n";
    std::cout<<"This can lead to circular dependencies if not managed carefully.\n";
}

void about_header_guards()
{
    std::cout<<"Header guards are used to prevent multiple inclusions of the same header file, which can lead to redefinition errors.\n";
    std::cout<<"They are typically implemented using preprocessor directives like #ifndef, #define, and #endif.\n";
    std::cout<<"Header guards are conditional compilation directives that ensure a header file is included only once in a single compilation unit.\n";
    std::cout<<"For example:\n";
    std::cout<<"#ifndef CALCI_H\n";
    std::cout<<"#define CALCI_H\n";
    std::cout<<"// function declarations\n";
    std::cout<<"#endif // CALCI_H\n";

    std::cout<<"If there are two files of same name and thus same header guards, the preprocessor will only include the first one it encounters. Probably causes a compilation error\n";

    std::cout<<"To avoid this, you unique guards like PROJECT_NAME_CALCI_H or FILE_NAME_DATE_H use include guards with a unique prefix.\n";

    std::cout<<"We can also use #pragma once as an alternative to traditional header guards. It is a non-standard but widely supported directive that ensures the file is included only once per compilation unit.\n";

    std::cout<<"#pragma once will fail if the file is included from different directories with the same name, leading to multiple inclusions.\n";
}   

float get_input()
{
    float num{};
    std::cout<<"Enter a number:\n";
    std::cin>>num;
    return num;
}

int main()
{
    float a{get_input()}, b{get_input()};

    #ifndef USE_CALCULATOR
        std::cout<<"You are not using the calculator.\n";
        return 0;
    #endif

    std::cout<<"Using calculator functions:\n";
    std::cout<<"Addition: " << add(a, b) << std::endl;
    std::cout<<"Subtraction: " << subtract(a, b) << std::endl;
    std::cout<<"Multiplication: " << multiply(a, b) << std::endl;
    std::cout<<"Division: " << divide(a, b) << std::endl;
    std::cout<<"Power: " << power(a, b) << std::endl;

    return 0;
}