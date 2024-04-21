#include <cmath>

#include "Area.h"
#include "Constants.h"
//will have functions to calculate the area of the shapes

double squareArea(double length)
{
    double area = rectangleArea(length, length);
    return area;
}

double rectangleArea(double length, double width)
{
    double area = (length * width);
    return area;
}

double circleArea(double radius)
{
    double area = (PI* radius * radius);
    return area;
}