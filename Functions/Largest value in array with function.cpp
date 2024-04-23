#include <iostream>
using namespace std;

void largestNum(int a[], int size, int& largest)
{
    int index = 0; 
    while (index < size)
    {
        if(a[index]> largest)
        {
            largest = a[index];
        }
        index++;
    }
}

int main()
{
    int size = 5;
    int numbers[size] = {5, 20, 7, 10, 31};
    int largest = numbers[0];

    largestNum(numbers, size, largest);

    cout << "The largest number is: " << largest;
}