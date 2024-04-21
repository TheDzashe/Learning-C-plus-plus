#include "Average.h"
#include "Sum.h" //how to link another cpp file.


//overloaded functions, whatever values the user enters, there will be a function to perform the tasks required
double calculateAverage(double num1, double num2)
{
    //return ((calculateSum(num1, num2))/2); // calling the sum function since it would perform the task of adding all the numbers
    return ((num1 + num2)/2);
}

double calculateAverage(double num1, double num2, double num3)
{
    //return ((calculateSum(num1, num2, num3)/3));
    return ((num1 + num2 + num3)/3);
}

double calculateAverage(double num1, double num2, double num3, double num4)
{
    //return((calculateSum(num1, num2, num3, num4)/4));
    return((num1 + num2 + num3 +num4)/4);
}
