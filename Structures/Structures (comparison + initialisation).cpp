#include <iostream>
//this code shows how structures work, by having the user enter a Persons values and seeing how the ages compare to those of the defined user

/*how to declare a structure*/       
//also a comment for a comment the above is how you would initiate a multi-line comment
struct Person 
{
    std::string fullName;
    int age;
};

int main()
{
    Person person1 = {"Alice", 25}; // initialising a struct
    Person person2;

    std::cout<< "Please enter the persons full name :";
    getline(std::cin, person2.fullName); //how to access a struct

    std::cout <<"Please enter the person's age: ";
    std::cin>> person2.age;

    if(person1.age == person2.age)
    {
        std::cout << "The people are the same age";
    }
    else
    {
        std::cout <<"They are not the same age" << std::endl;
        if(person1.age<person2.age)
        {
            std::cout <<"The second person, " << person2.fullName << " is older.";
        }
        else if(person1.age>person2.age)
        {
            std::cout <<" The first person, " <<person1.fullName << " is older.";
        }
        
    }

}