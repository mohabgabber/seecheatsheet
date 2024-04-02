#include <stdio.h>
//* 2 - Variables Overview
int main(void)
{
    //* C is a statically typed language, meaning each variable must have a specific data type.
    //* variables can be initialized without assignment.
    int myint;
    //* then we can start assigning a value to them
    myint = 2;
    printf("%d\n", myint); //* "%d" is used to place a value of type integer inside the string. it is called the format specifier for integer

    //* we can also reassign a value to a non constant variable
    myint = 4;
    printf("%d\n", myint); //* the "\n" is used to print a new line

    //* You can also assign values at initialization directly
    char mychar = 'c'; //* the value must be in single quotation marks
    printf("%c", mychar);

    return 0;
}