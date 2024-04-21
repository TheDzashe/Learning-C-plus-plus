#include <iostream>
#include "Subtract.h"
#include "Sum.h"

int main()
{
    double num1, num2;
    
    std::cout <<"Please enter two values: " << std::endl;
    std::cout << "Num 1: ";
    std::cin >> num1;

    std::cout << "Num 2: ";
    std::cin >> num2;

    subtractNumbers(num1, num2);
    sumNumbers(num1, num2);


}