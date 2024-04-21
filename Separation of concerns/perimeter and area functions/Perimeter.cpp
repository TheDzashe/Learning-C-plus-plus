#include <cmath>

#include "Perimeter.h"
#include "Constants.h"
//will have functions to calculate the area of the shapes


double squarePerimeter(double length)
{
    double perimeter = rectanglePerimeter(length, length);
    return perimeter;
}

double rectanglePerimeter(double length, double width)
{
    double perimeter = 2* (length + width);
    return perimeter;
}

double circlePerimeter(double radius)
{
    double perimeter = (2* PI * radius);
    return perimeter;
}