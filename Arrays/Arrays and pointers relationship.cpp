#include <iostream>

void fillArray(int a[], int size)
{
    std::cout << "Enter: ";
    for (int i =0; i < size; i++)
    {
        std::cout << "Value " << i+1 << ": ";
        std::cin >> a[i];
    }
}

int main()
{
    int SIZE;
    int *ptr;
    
    std::cout << "Enter the size of the array ";
    std::cin >> SIZE;
    
    int numbers[SIZE];
    ptr = numbers;
    fillArray(numbers, SIZE);
    
    std::cout<< "*numbers =" << *numbers <<std::endl;
    std::cout<< "numbers =" << numbers <<std::endl;
    std::cout<< "numbers[0] =" << numbers[0] <<std::endl;
    std::cout<< "*ptr =" << *ptr <<std::endl;
    std::cout<< "ptr =" << ptr <<std::endl;
    
    
}