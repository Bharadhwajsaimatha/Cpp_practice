#include<iostream>
#include<math.h>
#include "calci.h"

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    if(b == 0)
    {
        std::cerr<<"Error: Division by zero is not allowed.\n";
        return NAN; // Return Not-a-Number for division by zero
    }
    return a / b;
}

float power(float base, float exponenet)
{
    return pow(base,exponenet);
}