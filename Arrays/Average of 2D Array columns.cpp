#include <iostream>
using namespace std;

const int ROWS = 2, COLS =2;
void print(int a[][COLS], int rows)
{
  
  for (int j = 0; j < COLS; j++)
  {
    
    int sum=0, average =0;
    for(int i =0; i <rows; i++)
    {
      
      sum += a[i][j];
    }
    average = sum / rows;
    cout << "The average is: " <<average <<endl;
    
  }
}

int main()
{
  int numbers[ROWS][COLS]= {{78,98}, {78,98}};
  print(numbers, ROWS);
}