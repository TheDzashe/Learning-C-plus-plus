#include <iostream>

struct Numbers
{
    int x;
    float y;
};

int main()
{
    const int SIZE =2;
    Numbers* numsList[SIZE];
    Numbers nums;
    
    for(int i =0; i<SIZE; i++)
    {
        numsList[i] = &nums; //using the array name to access the elements of an array
        
    }
    for(int i=0; i<SIZE; i++)
    {
        std::cout<< "Enter the value for x: ";
        std::cin>> numsList[i] -> x;
        
        std::cout <<"Enter the value for y: ";
        std::cin >> numsList[i] -> y;
    }
    
    for(int i = 0; i<SIZE; i++)
    {
        std::cout <<"The value for x is " << numsList[i] ->x <<std::endl;
        std::cout << "The value for y is " << numsList[i] -> y <<std::endl;
    }
    
    return 0;
}