#include <iostream>
using namespace std;

const int ROWS =2, COLS =2;

void print(int& average, int& count)
{
    cout <<"The average for row    " << count <<  " is: " << average << endl;
}

void addRow(int a[][COLS], int rows)
{
    int sum=0, average =0, count =0;
    for(int i =0; i< rows; i++)
    {
        int sum=0, average =0;
        for(int j=0; j<COLS; j++)
        {
            sum += a[i][j];
            

        }
        average = sum/COLS;
        count++;
        print(average, count);
    }
}



int main()
{
    int numbers[ROWS][COLS] = {{78,92}, {34,78}};
    addRow(numbers, ROWS);

}