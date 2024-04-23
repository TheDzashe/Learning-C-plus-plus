#include <iostream>
using namespace std;

void countDown(int num)
{
    if(num == 0)
    {
        cout << "Blast Off!";
    }
    else
    {
        
        cout << num << "....";
        countDown(num-1);
        
    }
}

int main()
{
    int num;
    cout << "Enter a number";
    cin >> num;

    countDown(num);
}