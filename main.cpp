/**************************************************************
* Class: CSC-600-01 # Fall 2020
* Group Name: Cabinet
* Name: Basic Data Types and Operations
* Student ID: 915173797
* Name: Benjamin Lewis
*  File: fsdriver3.c
*
* **************************************************************/

#include <iostream>

unsigned int unsignedIntegerDataType(unsigned int, unsigned int);
int integerDataType(int, int);

int main()
{
    std::cout << "Hello World!" << std::endl;
    //  Unsigned int in C++ is from -4294967296 to 4294967295
    unsigned int a = 4294967295;
    unsigned int b = 1;
    unsignedIntegerDataType(a, b);

    //  Unsigned int in C++ is from -4294967296 to 4294967295
    int c = 2147483647;
    int d = 1;
    integerDataType(c, d);
}
//  Unsigned int in C++ is from -4294967296 to 4294967295
unsigned int unsignedIntegerDataType (unsigned int a, unsigned int b)
{
    unsigned int c = a + b;
    std::cout << "unsigned int a = " << a << std::endl;
    std::cout << "unsigned int b = " << b << std::endl;
    std::cout << "The answer mathematically should be a + b > 0 since both a & b > 0" << std::endl;
    std::cout << "a + b = " << c << std::endl;
}

//  Unsigned int in C++ is from -2147483648 to 2147483647
int integerDataType (int a, int b)
{
    int c = a + b;
    std::cout << "\nint a = " << a << std::endl;
    std::cout << "int b = " << b << std::endl;
    std::cout << "The answer mathematically should be a + b > 0 since both a & b > 0" << std::endl;
    std::cout << "a + b = " << c << std::endl;
}