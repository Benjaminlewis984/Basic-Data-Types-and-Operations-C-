/**************************************************************
* Class: CSC-600-01 # Fall 2020
* Name: Basic Data Types and Operations
* Student ID: 915173797
* Name: Benjamin Lewis
* **************************************************************/

#include <iostream>

void unsignedIntegerDataType(unsigned int, unsigned int);
void integerDataTypePositive(int, int);
void integerDataTypeNegative(int, int);
void doubleDataType(double, double);
void associativity(double, double, double);

int main()
{
    std::cout << "Hello World!" << std::endl;
    //  Unsigned int's
    unsigned int a = 4294967295;
    unsigned int b = 1;
    unsignedIntegerDataType(a, b);

    // int's
    int c = 2147483647;
    int d = 1;
    integerDataTypePositive(c, d);
    c = -2147483648;
    d = -1;
    integerDataTypeNegative(c, d);

    // double's
    double e = 1;
    double f = .000000000000001;
    doubleDataType(e, f);

    double g = 1e-30;
    double h = 1e+30;
    double i = -1e+30;
    associativity(g, h, i);

    // Power functions
    std::cout << "pow(-2., 3) = " << pow(-2,3) << std::endl;
    std::cout << "pow(-2., 3.0) = " << pow(-2,3) << std::endl;
    std::cout << "pow(-2., 3.00000000001) = " << pow(-2,3) << std::endl;

    // Memory size
    std::cout << "Memory size of 1. = " << sizeof(1.) << std::endl;
    std::cout << "Memory size of 1.F = " << sizeof(1.F) << std::endl;
    std::cout << "Memory size of 1 = " << sizeof(1) << std::endl;
    std::cout << "Memory size of '1' = " << sizeof('1') << std::endl;
    std::cout << "Memory size of \"1\" = " << sizeof("1") << std::endl;
}

//  Unsigned int in C++ is from -4294967296 to 4294967295
void unsignedIntegerDataType (unsigned int a, unsigned int b)
{
    unsigned int c = a + b;
    std::cout << "unsigned int a = " << a << std::endl;
    std::cout << "unsigned int b = " << b << std::endl;
    std::cout << "The answer mathematically should be a + b > 0 since both a && b > 0" << std::endl;
    std::cout << "a + b = " << c << std::endl;
}

//  Unsigned int in C++ is from -2147483648 to 2147483647
void integerDataTypePositive (int a, int b)
{
    int c = a + b;
    std::cout << "\nint a = " << a << std::endl;
    std::cout << "int b = .000000000000001" << std::endl;
    std::cout << "The answer mathematically should be a + b > 0 since both a && b > 0" << std::endl;
    std::cout << "a + b = " << c << std::endl;
}

void integerDataTypeNegative (int a, int b)
{
    int c = a + b;
    std::cout << "\nint a = " << a << std::endl;
    std::cout << "int b = " << b << std::endl;
    std::cout << "The answer mathematically should be a + b < 0 since both a && b < 0" << std::endl;
    std::cout << "a + b = " << c << std::endl;
}

void doubleDataType (double a, double b)
{
    double c = a + b;
    std::string boolStatement;
    boolStatement = "false";
    if (bool(c == 1) == 0)
    {
        boolStatement = "true";
    }
    std::cout << "\ndouble a = " << a << std::endl;
    std::cout << "double b = " << b << std::endl;
    std::cout << "The answer mathematically should be a + b > 1" << std::endl;
    std::cout << "a + b = " << c << std::endl;
    std::cout << "a + b == 1? " << boolStatement << std::endl;
}

void associativity(double a, double b, double c)
{
    std::cout << "\ndouble a = " << a << std::endl;
    std::cout << "double b = " << b << std::endl;
    std::cout << "double c = " << c << std::endl;
    std::cout << "Showing how (a+b)+c != (c+b)+a" << std::endl;
    std::cout << "(a+b)+c = " << (a + b) + c << std::endl;
    std::cout << "a+(b+c) = " << a + (b + c) << std::endl;
}