/**************************************************************
* Class: CSC-600-01 # Fall 2020
* Name: Basic Data Types and Operations
* Student ID: 915173797
* Name: Benjamin Lewis
* **************************************************************/

#include <iostream>
#include <iomanip>

void unsignedIntegerDataType(unsigned int, unsigned int);
void integerDataTypePositive(int, int);
void integerDataTypeNegative(int, int);
void doubleDataType(double, double);
void associativity(double, double, double);
void displayAscii();
void squareRoot(double);

int main()
{
    { //Segment 1
        //  Unsigned int's
        unsigned int a = 4294967295;
        unsigned int b = 1;
        unsignedIntegerDataType(a, b);
    }

    { //Segment 2
        // int's
        int a = 2147483647;
        int b = 1;
        integerDataTypePositive(a, b);
    }

    { // Segment 3
        int a = -2147483648;
        int b = -1;
        integerDataTypeNegative(a, b);
    }


    { //Segment 4
        // double's
        double a = 1;
        double b = .000000000000001;
        doubleDataType(a, b);
    }

    { // Segment 5}
        double a = 1e-30;
        double b = 1e+30;
        double c = -1e+30;
        associativity(a, b, c);
    }

    { // Segment 6
        // Power functions
        std::cout << "\nSegment 6" << std::endl;
        std::cout << "pow(-2., 3) = " << pow(-2, 3) << std::endl;
        std::cout << "pow(-2., 3.0) = " << pow(-2, 3) << std::endl;
        std::cout << "pow(-2., 3.00000000001) = " << pow(-2, 3) << std::endl;
    }

    { // Segment 7
        // Memory size
        std::cout << "\nSegment 7" << std::endl;
        std::cout << "Memory size of 1. = " << sizeof(1.) << std::endl;
        std::cout << "Memory size of 1.F = " << sizeof(1.F) << std::endl;
        std::cout << "Memory size of 1 = " << sizeof(1) << std::endl;
        std::cout << "Memory size of '1' = " << sizeof('1') << std::endl;
        std::cout << "Memory size of \"1\" = " << sizeof("1") << std::endl;
    }

    { // Segment 8
        // Precision of Digits
        double a = 1.;
        double b = 3.;
        std::cout << "\nSegment 8" << std::endl;
        std::cout.precision(20);
        std::cout << "1./3. = " << std::fixed << (a / b) << std::endl;
        std::cout << "The digits that are 3 repeating are correct. Once the precision reaches the double limit "
                     "(which is after the 3's) the program will generate random, inaccurate numbers." << std::endl;
    }

    { // Segment 9
        // Displaying all printable characters on ASCII table
        std::cout << "\nSegment 9" << std::endl;
        displayAscii();
    }

    { // Segment 10
        // Creating my own square root function
        double z = 2.;
        std::cout << "\nSegment 10" << std::endl;
        squareRoot(z);
    }

    return 0;
}

//  Unsigned int in C++ is from -4294967296 to 4294967295
void unsignedIntegerDataType (unsigned int a, unsigned int b)
{
    unsigned int c = a + b;
    std::cout << "Segment 1" << std::endl;
    std::cout << "unsigned int a = " << a << std::endl;
    std::cout << "unsigned int b = " << b << std::endl;
    std::cout << "The answer mathematically should be a + b > 0 since both a && b > 0" << std::endl;
    std::cout << "a + b = " << c << std::endl;
}

//  int in C++ is from -2147483648 to 2147483647
void integerDataTypePositive (int a, int b)
{
    int c = a + b;
    std::cout << "\nSegment 2" << std::endl;
    std::cout << "int a = " << a << std::endl;
    std::cout << "int b = .000000000000001" << std::endl;
    std::cout << "The answer mathematically should be a + b > 0 since both a && b > 0" << std::endl;
    std::cout << "a + b = " << c << std::endl;
}

void integerDataTypeNegative (int a, int b)
{
    int c = a + b;
    std::cout << "\nSegment 3" << std::endl;
    std::cout << "int a = " << a << std::endl;
    std::cout << "int b = " << b << std::endl;
    std::cout << "The answer mathematically should be a + b < 0 since both a && b < 0" << std::endl;
    std::cout << "a + b = " << c << std::endl;
}

void doubleDataType (double a, double b)
{
    double c = a + b;
    std::cout << "\nSegment 4" << std::endl;
    std::string boolStatement;
    boolStatement = "false";
    if (bool(c == 1) == 0)
    {
        boolStatement = "true";
    }
    std::cout << "double a = " << a << std::endl;
    std::cout << "double b = " << b << std::endl;
    std::cout << "The answer mathematically should be a + b > 1" << std::endl;
    std::cout << "a + b = " << c << std::endl;
    std::cout << "a + b == 1? " << boolStatement << std::endl;
}

void associativity(double a, double b, double c)
{
    std::cout << "\nSegment 5" << std::endl;
    std::cout << "double a = " << a << std::endl;
    std::cout << "double b = " << b << std::endl;
    std::cout << "double c = " << c << std::endl;
    std::cout << "Showing how (a+b)+c != (c+b)+a" << std::endl;
    std::cout << "(a+b)+c = " << (a + b) + c << std::endl;
    std::cout << "a+(b+c) = " << a + (b + c) << std::endl;
}

void displayAscii()
{
    int inc = 33;
    // Prints 3 rows of all the printable ASCII characters
    for(int rows = 33; rows < 64; rows++)
    {
        inc = rows;
        while(inc <= 127)
        {
            std::cout << std::hex << std::setw(2) << std::setfill('0')
                      << inc << "= " << std::setw(4) << std::setfill(' ') << char(inc) << " | ";
            inc+=32;
        }

        std::cout << "\n";
    }
}

void squareRoot(double a)
{
    double xNew = a;
    double xTemp;
    do {
        xTemp = xNew;
        xNew = (xTemp + a / xTemp) / 2;
    }
    while( xNew != xTemp );
    std::cout << "Square root of 2. = " << xNew << std::endl;
}