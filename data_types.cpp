#include <iostream>
#include <iterator>


//comments
/*
    multi-line comments
*/

int main()
{
    std::cout<<"Hello Barry! Testing compilers and data types."<<std::endl;

    //Data types
    
    //int
    int a = 2;
    //Different  ways to initialize
    int b(3);
    int c{4};
    std::cout<<"a: "<<a<<", b: "<<b<<", c: "<<c<<std::endl;
    //Different int types
    // There are different int types like short, long, long long
    short int sa = 2;
    long int la = 3;
    long long int lla = 4;
    std::cout<<"Short int: "<<sa<<", Long int: "<<la<<", Long long int: "<<lla<<std::endl;
    // Size of int and its types
    std::cout<<"size of int:"<<sizeof(a)<<std::endl<<"size of short int:"<<sizeof(sa)<<std::endl<<"size of long int:"<<sizeof(la)<<std::endl<<"size of long long int:"<<sizeof(lla)<<std::endl;
    //Unsigned int
    unsigned int ua = 5;
    std::cout<<"Unsigned int: "<<ua<<std::endl;
    //Size of unsigned int
    std::cout<<"size of unsigned int:"<<sizeof(ua)<<std::endl;

    // char
    char ch = 'B';
    char ch_2 = 'b';
    std::cout<<"Char: "<<ch<<", Char 2: "<<ch_2<<std::endl;
    std::cout<<(ch == ch_2)<<std::endl;
    //Size of char
    std::cout<<"size of char:"<<sizeof(ch)<<std::endl;
    // char can be used as int
    std::cout<<"Char as int: "<<(int)ch<<std::endl;
    // char can be used as bool
    std::cout<<"Char as bool: "<<(bool)ch<<std::endl;
    // char can be used as float
    std::cout<<"Char as float: "<<(float)ch<<std::endl;
    // char can be used as double
    std::cout<<"Char as double: "<<(double)ch<<std::endl;
    // Types of char
    char ch_3 = 'A';
    signed char sch = 'B';
    unsigned char uch = 'C';
    std::cout<<"Char 3: "<<ch_3<<", Signed Char: "<<sch<<", Unsigned Char: "<<uch<<std::endl;
    //Size of char types
    std::cout<<"size of char:"<<sizeof(ch_3)<<std::endl<<"size of signed char:"<<sizeof(sch)<<std::endl<<"size of unsigned char:"<<sizeof(uch)<<std::endl;


    return 0;
}