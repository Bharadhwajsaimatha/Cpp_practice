#include <iostream>

// Defining Macros
// Defines how an input text should be replaced by the preprocessor
// two types of macros: object-like and function-like

// Function like macros are usually unsafe and can be done with a normal function
// Object-like macros are usually used for constants or simple replacements and are defined in two ways 
#define PI 3.14159 // Object-like macro
#define NAME "Barry"
#define SQUARE(x) ((x) * (x)) // Function-like macro
#define IS_OK true

//macros without substitution
#define IS_IT_OK // This is a macro without substitution text


void use_macros()
{
    std::cout<<"Macro NAME: "<<NAME<<std::endl;
    std::cout<<"Macro PI: "<<PI<<std::endl;
    std::cout<<"Macro IS_OK: "<<std::boolalpha<<IS_OK<<std::endl; 
    std::cout<<"std::boolalpha is used to print boolean values as true/false instead of 1/0.\n";

    //function-like macro usage
    int num{5};
    std::cout<<"Square of "<<num<<" is: "<<SQUARE(num)<<std::endl;

    std::cout<<"Macros with substitution text are legacy features and should be avoided in modern C++.\n";
    std::cout<<"Macros without substitution text are not replaced by the preprocessor and can be used for conditional compilation.\n";
}

void conditional_compilation()
{
    std::cout<<"Different conditional compilation directives listed below:\n";

    #ifdef IS_IT_OK
        std::cout<<"IS_IT_OK is defined.\n";
    #endif

    #ifndef IS_IT_OK
        std::cout<<"IS_IT_OK is not defined.\n";
    #endif

    std::cout<<"The \#if 0 acts as a comment block, so the code inside it is not compiled.\n";
    #if 0
        std::cout<<"This code will not be compiled.\n";
    #endif
    std::cout<<"The \#if 1 acts as a normal code block, so the code inside it is compiled.\n";

    #ifdef PI
        std::cout<<"Is PI defined?\t:\t"<<std::boolalpha<<IS_OK<<std::endl;
    #endif
    

}

int main()
{
    std::cout<<"Prior to compilation, each code(.cpp) file is preprocessed.\n";
    std::cout<<"A program called Preprocessor makes changes to the text of the code before it is compiled. Happens via temporary files.\n";
    std::cout<<"Preprocessor does: \n";
    std::cout<<"1. Includes header files.\n";
    std::cout<<"2. Replaces macros with their definitions.\n";
    std::cout<<"3. Removes comments.\n";
    std::cout<<"4. Handles conditional compilation.\n";
    std::cout<<"5. Expands inline functions.\n";

    std::cout<<".cpp file -> translation unit by preprocessor -> Compiled file or binary by compiler -> linker to Executable file\n";
    std::cout<<"Preprocessor directives start with # and end with a newline and not semicolon.\n At preprocessor outputs there'd be any directives only the output of the preprocessor.\n";

    use_macros();
    conditional_compilation();

    return 0;
}