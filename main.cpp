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

int main()
{
    std::cout << "Hello World!" << std::endl;
//  Unsigned int in C++ is from -4294967296 to 4294967295
    unsigned int a = 4294967295;
    unsigned int b = 3;
    unsigned int c = a + b;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "The answer mathematically should be a + b > 0 since both a & b > 0" << std::endl;
    std::cout << "a + b = " << c << std::endl;

}