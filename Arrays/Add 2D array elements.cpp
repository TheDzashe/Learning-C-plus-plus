#include <iostream>
using namespace std;
const int ROWS = 2, COLS = 2;

int addArray(int a[][COLS], int rows)
{
    int sum=0;
    for (int i =0; i < rows; i++)
    {
        for (int j=0; j < COLS; j++)
        {
            sum += a[i][j];
        }
    }
    return (sum);
}

int main()
{
    int numbers[ROWS][COLS]= {{5,7}, {3,6}};
    int total = addArray(numbers, ROWS);

    cout << "The total is " << total;
}