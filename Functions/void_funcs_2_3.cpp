#include<iostream>
# include<cstdlib>
void aboutVoid()
{
    std::cout<<"A void function is a function that does not return a value."<<std::endl;
    std::cout<<"A return statement in a void function is optional."<<std::endl;

    return; //This is optional, but can be used to exit the function early.
}
int main()
{
    std::cout<<"We can't call a function that returns void when we expect a value."<<std::endl;
    aboutVoid();

    return EXIT_SUCCESS; // or return 0;

}