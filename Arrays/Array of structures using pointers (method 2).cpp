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
    Numbers numbers[SIZE];
    
    for(int i =0; i<SIZE; i++)
    {
        numsList[i] = numbers; //using the array name to access the elements of an array
        
    }
    
    for(int i=0; i<SIZE; i++)
    {
        std::cout << "Enter the values for index " << i <<std::endl;
        std::cout<< "Enter an integer value for x: ";
        std::cin>> numsList[i] -> x;
        
        std::cout <<"Enter a float value for y: ";
        std::cin >>numsList[i] -> y ;
        std::cout << std::endl;
    }
    
    for(int i = 0; i<SIZE; i++)
    {
        
        std::cout <<"The values for index " << i <<std::endl;
        std::cout <<"The value for x is " << numsList[i] ->x <<std::endl;
        std::cout << "The value for y is " << numsList[i] -> y <<std::endl;
        std:: cout <<"______________________________" <<std::endl;
        std::cout <<std::endl;
    }
    
    return 0;
}