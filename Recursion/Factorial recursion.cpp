#include <iostream>
using namespace std;

int factorial(int num)
{
    if (num > 0)
    {
        return (num * factorial(num-1));
    }
    else 
        return 1;
}

int main()
{
    int num, value;
    cout << "Enter a number ";
    cin >> num;

    value = factorial(num);
    cout << "The factorial of " << num << " is " << value;
}