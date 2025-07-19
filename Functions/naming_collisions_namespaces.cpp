#include <iostream>
#include <cstdlib>
#include<string>

// Gloabal namespace
int x{20};
void foo();
// x = 35 ; //This is not allowed, as it is not in a function or namespace and is a executable statement.

// Creating a namespace
namespace my_attributes
{
    std::string name{"Barry"};
    int age{26};

    void display_my_attributes()
    {
        std::cout<<"Hi I'm "<<my_attributes::name<<", I'm "<<my_attributes::age<<" years old.\n";
    }
}
int main()
{
    std::cout<<"If two identical identifiers are in same program then compiler or linker cant tell them apart then this is called naming collision.\n";
    std::cout<<"If the colliding identifiers are introduced in same file then compiler throws an error.\nIf they are introduced in different files then linker throws an error.\n";

    std::cout<<"Scope regions are used to avoid naming collisions.\n For example, body of a function is a scope region.\n";

    // Namespaces

    std::cout<<"Namespaces provide another type of scope region.\n Allows us to group identifiers together and avoid naming collisions.\n";
    std::cout<<"Namespaces contain only declarations and definitions but executable statements are not allowed unless they are in a function.\n";
    std::cout<<"Global scope or global namespace is the outermost scope region. Any identifier declared outside of any namespace or function is in the global namespace.\n";

    std::cout<<"In std::cout we are using the identifier cout from the std namespace.\nThe symbol :: is called the scope resolution operator.\n";
    std::cout<<"When an identifier includes namespace prefix, it is called a qualified identifier.\n";

    std::cout<<"Another way is to use using-directive statement to bring all identifiers from a namespace into the current scope.\n";
    std::cout<<"For example, using namespace std; will bring all identifiers from the std namespace into the global namespace.\n";
    std::cout<<"Avoid using-directive in header files as it can lead to naming collisions. The whole point of namespaces is to avoid naming collisions.\n";

    return EXIT_SUCCESS;
}