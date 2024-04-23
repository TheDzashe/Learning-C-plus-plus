#include <iostream>
using namespace std;

int multiply(int a, int b)
{
    int product = a * b;
    return product;

}

int main()
{
    int firstNum =2, secNum = 3, answer;
    answer = multiply(firstNum, secNum);

    cout << "The product is " << answer << endl;
}