#include <iostream>

#include "Perimeter.h"
#include "Area.h"

int main()
{
    std::cout << squarePerimeter(10) <<std::endl;
    std::cout << rectanglePerimeter(10, 30) <<std::endl;
    std::cout << circlePerimeter(5) <<std::endl;

    std::cout << squareArea(10) <<std::endl;
    std::cout << rectangleArea(10, 30) <<std::endl;
    std::cout << circleArea(5) <<std::endl;
}
