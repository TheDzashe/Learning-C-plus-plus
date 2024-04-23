#include <iostream> 
using namespace std;

double mpg(double miles, double gallons)
{
    return(miles/gallons);
}

int main()
{
    int mpgComp;

    cout << mpg(20, 20) << endl
        << mpg(5.8, 20.2) <<endl
        << mpg(5, 2.4);
}