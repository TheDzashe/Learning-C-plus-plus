#include <iostream>

//function to create a dynamic array
int* fillArray(int size)
{
    int* arrPtr;
    arrPtr = new int[size];
    
    std::cout << "Enter the values for your dynamic array " << std::endl;
    for(int i =0; i<size; i++)
    {
        std::cin>> arrPtr[i];
    }
    
    return arrPtr;
}

//function to print out the contents of array
void printArray(int* arrPtr, int size)
{
    std:: cout << "The contents of the array are: ";
    for(int i = 0; i<size; i++)
    {
        std::cout<< *(arrPtr+i) << " ";
    }
}

int main()
{
    int size=3;
    int* arrPtr;
    arrPtr = fillArray(size); //function call that will return an pointer to the dynamic array
    printArray(arrPtr, size); //function call to print the array
    
    return 0;
}