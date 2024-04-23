#include <iostream> 
using namespace std;

int fun(int x)
{
    // definition of
    // function
    x = 30;
    return x;
}
 
int main()
{
    int x = 20;

    fun(x);
    
    cout << "x = " << x;
    return 0;
}