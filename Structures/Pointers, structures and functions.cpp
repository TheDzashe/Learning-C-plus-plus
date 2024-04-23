//this is a program to use pointers, structures, amd functions
#include <iostream>

struct Numbers
{
    int x;
    double y;
};

void insertValues(Numbers *strPtr)
{ 
    strPtr -> x=4;
    strPtr -> y =7.8;}

void printVals(Numbers *nums)
{
    std::cout << (*nums).x <<std::endl;
    std::cout << (*nums).y;
}

int main()
{
    Numbers nums;
    Numbers* strPtr = &nums;

    insertValues(strPtr);

    printVals(&nums);
}