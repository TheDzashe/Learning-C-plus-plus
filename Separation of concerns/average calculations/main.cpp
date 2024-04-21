
/*Author: Nyashadzashe Makwabarara
Date: 07/04/2024
Program: a program that finds the average of values entered by the user*/

#include <iostream>

#include "Sum.h"
#include "Average.h"
#include "PrintSumAverage.h"

double numbers, sum, average;
double num1, num2, num3, num4;

void helperNumbers(int numbers)
{
    if (numbers == 2)
    {
        std::cout << "Enter the two values: " <<std::endl;
        std::cout << "num1: ";
        std::cin >> num1;

        std::cout << "num2: ";
        std::cin >> num2;

        sum = calculateSum(num1, num2);
        average = calculateAverage(num1, num2);
        printSumAndAverage(sum, average);
    }
    if(numbers == 3)
    {
        std::cout << "Please enter the three values: " <<std::endl;
        std::cout << "num1: ";
        std::cin >> num1;

        std::cout << "num2: ";
        std::cin >> num2;

        std::cout << "num3: ";
        std::cin >> num3;

        sum = calculateSum(num1, num2, num3);
        average = calculateAverage(num1, num2, num3);
        printSumAndAverage(sum, average);
    }
    else if(numbers == 4)
    {
        std::cout << "Please enter the three values: " <<std::endl;
        std::cout << "num1: ";
        std::cin >> num1;

        std::cout << "num2: ";
        std::cin >> num2;

        std::cout << "num3: ";
        std::cin >> num3;

        std::cout << "num4: ";
        std::cin >> num4;

        sum = calculateSum(num1, num2, num3, num4);
        average = calculateAverage(num1, num2, num3, num4);
        printSumAndAverage(sum, average);
    }
    else
    {
        std::cout << "Invalid input. Please enter numbers between 2 and 4." << std::endl;
        std::cin>> numbers;
        helperNumbers(numbers);
    } 
}

int main()
{
    
    std::cout << "Please enter how many numbers you want to input (between 2 to 4): ";
    std::cin >> numbers;
    helperNumbers(numbers);

    
}