#include <iostream>
using namespace std;

int square(int number)
{
    int squared = number * number;
    return squared;
}

double square(double number)
{
    double squared = number * number;
    return squared;
}

int main()
{
    int intNum;
    double doubleNum;

    cout << "Enter an integer and floating-point number " << endl;
    cin >> intNum >> doubleNum;

    cout << "Square value of integer is " << square(intNum) << endl;
    cout << "Square value of floating-point is " << square(doubleNum) << endl;
}