#include<iostream>

int iostream_part()
{
    std::cout<<"Text to print to console since mine is a console based program"<<std::endl;
    std::cout<<"Characters + Operators + Numbers + Strings + Floats + Doubles + Booleans"<<std::endl;

    double sample_variable_to_be_printed{3.142357};
    std::cout<<"Sample variable to be printed: "<<sample_variable_to_be_printed<<std::endl; // Multiple variables can be printed in a single line

    // what happens without std::endl?
    std::cout<<"Why is";
    std::cout<<" std::cout impoortant";
    std::cout<<"?" << std::endl;
    // std::endl is used to flush the output buffer and print a new line
    std::cout<<"Why is"<<std::endl;
    std::cout<<" std::cout important"<<std::endl;
    std::cout<<"?" << std::endl;

    std::cout<<" New line can also be printed using \\n"<<std::endl;
    std::cout<<" The escape character \\ is used to print a single backslash"<<std::endl;

    std::cout<<"std::cout is buffered, meaning first sent to buffer and then flushed periodically or when the buffer is full"<<std::endl;
    std::cout<<"Buffering increases performance by reducing the number of system calls"<<std::endl;

    std::cout<<"std>.endl vs \\n"<<std::endl;
    std::cout<<"std::endl flushes the buffer while \\n does not flush the buffer"<<std::endl;

    // std::cin
    int ip_variable_1{}, ip_variable_2{};
    std::cout<<" Using the extraction operator >> to read input from the user"<<std::endl;
    std::cin>>ip_variable_1>>ip_variable_2;
    std::cout<<"Number entered by user:"<<std::endl<<ip_variable_1<<std::endl<<ip_variable_2<<std::endl;

    std::cout<<"std::cin is also buffered, meaning first sent to buffer and then flushed periodically or when the buffer is full"<<std::endl;
    std::cout<<"std::cin ignores leading whitespace characters like spaces, tabs and newlines"<<std::endl;
    std::cout<<"std::cin stops reading input when it encounters a whitespace character"<<std::endl;

    return 0;
}

int objects_variables()
{
    // literals : Values that are hard coded in the program
    std::cout<<2.2<<std::endl;
    // String literals
    std::cout<<"H"<<std::endl;

    // In CPP we access memory indirectly through an object
    // Object stores a value in memory while variable is an object with a name, named by an identifier

    // A declaration statement called definition is used to tell the computer that we want to use a variable

    int x; // Declaration of variable named x of type int

    return 0;
}

int variable_assignment_init()
{
    // Better to initialise one variable in a single statement
    int height; // Declaration of variable named height of type int : Also this is default initialisation  initialised to garbage value
    height = 10; // Assignment of value 10 to variable height where = is the assignment operator
    // This is called copy-assignment
    // Declaration and assignment in a single statement
    int width = 5; // Declaration and assignment of value 20 to variable width also called copy-initialization

    int base(10); // Direct initialization : Used now-a-days when values are explicitly casted to a type
    int height_2{15}; // direct-list intialization
    int base_2 = {20}; //Copy-list initialization
    int area{}; // value initialization 

    std::cout<<"Direct-list initialization does not allow narrowing conversion"<<std::endl;
    // int area_2{10.5}; // Error: narrowing conversion from double to int
    
    int sample_1 = 10.8;
    int sample_2 (10.8);
    // int sample_3{10.8};
    // int sample_4 = {10.8};

    std::cout<<"Sample 1: "<<sample_1<<std::endl;
    std::cout<<"Sample 2: "<<sample_2<<std::endl;
    // std::cout<<"Sample 3: "<<sample_3<<std::endl;
    // std::cout<<"Sample 4: "<<sample_4<<std::endl;

    // Zero initialization
    int zero_init {};
    std::cout<<"Zero initialization: "<<zero_init<<std::endl;

    // maybe unused variables
    // [[maybe_unused]] is used to suppress the compiler warning for unused variables
    // It is used to indicate that the variable may be unused in the code
    [[maybe_unused]] double pi = 3.14;
    [[maybe_unused]] int unused_var = 10;

    return 0;

    
}   
int main()
{
    // Single line comment
    /*
        Multi-Line comment
        
    */
    variable_assignment_init();
    objects_variables();
    iostream_part();

    return 0;
}
