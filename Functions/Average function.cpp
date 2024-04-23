#include <iostream>
using namespace std;

double average(double a, double b, double c)
{
    return ((a+b+c)/3.0);
}

int main()
{
    cout << average(5.2,8.5, 8.5);
}