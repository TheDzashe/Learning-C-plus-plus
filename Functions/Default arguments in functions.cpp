#include <iostream>
using namespace std;

int sumFunc(int a= 2, int b = 3)
{
    int sum = a+ b;
    return (sum);

}

int main()
{

    int numDefault, numSpecific;

    numDefault = sumFunc();
    cout << "Default number " << numDefault; 

    numSpecific = sumFunc(10);
    cout << "Specific number is " << numSpecific << endl;
}