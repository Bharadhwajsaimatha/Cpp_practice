#include<iostream>

int add(int a, int b)
{
    return a + b;
}

int get_value()
{
    int num{};
    std::cout<<"Enter a number:\n";
    std::cin>>num;

    return num;
}

void aboutLocalScope()
{
    std::cout<<"Local scope refers to variables that are defined within a function or block of code."<<std::endl;
    std::cout<<"These variables are only accessible within that function or block."<<std::endl;
    std::cout<<"Local scope is useful for temporary variables that do not need to be accessed outside of the function."<<std::endl;
    std::cout<<"Variables defined in local scope are destroyed when the function exits."<<std::endl;
    std::cout<<"The destruction takes place in the reverse order of their creation."<<std::endl;

    std::cout<<"Variable creation and destruction is a runtime process."<<std::endl;
    std::cout<<"Identifier's scope is a compile-time process."<<std::endl;
    std::cout<<"Local scope is also known as block scope."<<std::endl;

    std::cout<<"Out of scope : Variable cannot be accesed within the code."<<std::endl;
    std::cout<<"Going out of scope typically applied to objects rather than identifiers. it means that the object is no longer accessible."<<std::endl;

    std::cout<<"Not all types of variables are destroyed when they go out of scope."<<std::endl;

    std::cout<<"Use parameter value when an intialisation is needed from the caller else use a local variable."<<std::endl;
}

int temporary_object()
{
    std::cout<<"Temporary objects have no scope. As scope is a property of an identifier."<<std::endl;
    std::cout<<"Temporary objects are created when a function returns an object by value and are destroyed immediately after the function call or before the execution next statement."<<std::endl;
    std::cout<<get_value()<<" is the value you entered."<<std::endl;
    return get_value() + 10; // Adding 10 to the value entered by the user
}

int main()
{
    int num1{5};
    int num2{10};
    int result{add(num1, num2)};
    std::cout<<"The result of adding "<<num1<<" and "<<num2<<" is: "<<result<<std::endl;
    aboutLocalScope();

    int temp{temporary_object()};
    std::cout<<"The temporary object returned the value: "<<temp<<std::endl;

    return 0;
}