#include <iostream>
using namespace std;

void fillArray (int a[], int size)
{
    int index = 0;
    cout << "Enter a non-negative integer in the index: ";
    while (index <size)
    {
        cout << index << ": ";
        cin >> a[index];
        index++;
    }
}

int main()
{
    const int SIZE =5;
    int numbers[SIZE];

    fillArray(numbers, SIZE);

    for(int index = 0; index < SIZE; index++)
    {
        cout << numbers[index];
    }
        
}