#include <iostream>

struct Numbers
{
    int x;
    double y;
};

/*This is basically a function that will dynamically create structures that each index that the array of pointers 
will point to. This is basically how to dynamically create an array of structs. Remember to always use loops to
access the members of an array*/
void createArray(Numbers* nums[], int size)
{
    for(int i =0; i<size; i++)
    {
        nums[i] = new Numbers;
    }
}

// function to insert values for specific members, into the specific indexes of the dynamic array
void addValues(Numbers *strPtr[], int size)
{
    for(int i =0; i<size; i++)
    {
        std::cout << "Enter the values for index" << i << std::endl;
        std::cout << "Enter value for x: ";
        std::cin >> strPtr[i] -> x; //remember that nums[SIZE] is a pointer, so this notation treats it as one

        std::cout <<"Enter the value for y: ";
        std::cin >> strPtr[i] -> y; //remember that this is the same as (*strPtr[i]).y
        std::cout <<std::endl;
    } 
}

void printValues(Numbers* strPtr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << "The values at index " << i <<": " <<std::endl;
        std::cout << "The value of x: " << strPtr[i] ->x << std::endl;
        std::cout << "The value of y: " << strPtr[i ] ->y <<std::endl;
        std::cout << std::endl;
    }
    
}

//function to delete dynamically allocated memory
void deleteArray(Numbers* nums[], int size)
{
    for(int i = 0; i <size; i++)
    {
        delete nums[i]; //this will delete the pointer, pointing to the stucture
        nums[i] = NULL; //to prevent a dangling pointer, set the pointer to NULL
    }
}

int main()
{
    const int SIZE = 2;
    Numbers* nums[SIZE];

    createArray(nums, SIZE);

    addValues(nums, SIZE);

    printValues(nums, SIZE);

    deleteArray(nums, SIZE);


}