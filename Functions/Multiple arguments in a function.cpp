#include <iostream>
using namespace std;

bool showSum(int, int, int, int);

int main()
{
int num1, num2, num3, num4;
cin >> num1 >> num2 >> num3 >> num4;
showSum(num1, num2, num3, num4);

}

bool showSum(int a, int b, int c, int d)
{
    int sum;
    sum = a + b+ c+ d;
    cout << "The sum is: " << sum;
}