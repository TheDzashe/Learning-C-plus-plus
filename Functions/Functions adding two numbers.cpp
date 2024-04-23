#include <iostream>
using namespace std;

int sum(int , int );

int main()
{
    int x, y, number;

    cout << "Enter a value for x:";
    cin>> x;

    cout << "Enter a value for y: ";
    cin>> y;

    number= sum(x,y);
    cout << "The added value is " << number<< endl;
    cout << "Display the number with a function " << sum(x,y) << endl;

    return 0;
}

int sum(int x, int y)
{
    int firstSum = x + y;
    return firstSum;
}