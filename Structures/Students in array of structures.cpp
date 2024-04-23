/*program is an array of structures, where the user stores student information. The user can them search
a particular student from the array*/

#include <iostream>

const int SIZE = 2;

struct Module
{
    std::string moduleCode;
    std::string moduleName;
};

struct Student
{
    std::string studentNum;
    std::string firstName;
    std::string lastName;
    Module mdl;
};

void createArray(Student* studentList[], int size)
{
    for(int i =0; i <size; i++)
    {
        studentList[i] = new Student;
    }
}

void fillArray(Student* studentList[], int size)
{
    for(int i =0; i <size; i++)
    {
        std::cout <<"Enter the details at index " << i <<": " << std::endl;
        std::cout << "Enter the student name: ";
        std::cin >> studentList[i] -> firstName;

        std::cout <<"Enter the last name: ";
        std::cin >> studentList[i] -> lastName;

        std::cout << "Enter the student number (every number starts with a \"u\" ): ";
        std::cin >> studentList[i] -> studentNum;

        std::cout << "Enter the student's module: ";
        std::cin >> studentList[i] -> mdl.moduleCode;
    }
}

void printArray(Student* studentList[], int size)
{
    for(int i =0; i <size; i++)
    {
        std::cout << "The details for student " <<i+1 << ": " <<std::endl;
        std::cout << "Full name: " << studentList[i] ->firstName <<" " << studentList[i] ->lastName <<std::endl;
        std::cout <<"Student number: " << studentList[i] -> studentNum << std::endl;
        std::cout << "Student's module code: " << studentList[i] -> mdl.moduleCode << std::endl;
    }
}



void searchArray(Student* studentList[], int size)
{
    Student oneStudent;
    bool found = false;
    std::cout << "Enter the first name of the student you are looking for: " <<std::endl;
    std::cin >> oneStudent.firstName;

    std::cout << "Enter the last name of the student you are looking for: " <<std::endl;
    std::cin >> oneStudent.lastName;

    for(int i =0; i < size; i++)
    {
        if((studentList[i] ->firstName == oneStudent.firstName) && (studentList[i] ->lastName == oneStudent.lastName));
        {
            std::cout << "Student found.";
            found = true;
            //return (oneStudent);
        }  
    }
    if(found == false)
    {
        std::cout << "Student not found.";
    }
    //return (oneStudent);

    
}


/*I was trying to create a function that will then return the value of the found student from the previous function
not sure how to do that yet.*/

/*void searchResults(Student oneStudent)
{
    std::cout << "The results of the search are: ";
    std::cout << "First name: " << oneStudent.firstName;
    std::cout << "Last name: " << oneStudent.lastName;

}*/

int main()
{
    Student* studentList[SIZE];
    Student oneStudent;

    createArray(studentList, SIZE);
    fillArray(studentList, SIZE);
    printArray(studentList, SIZE);
    //oneStudent = 
    searchArray(studentList ,SIZE);

    //searchResults(oneStudent);

    return 0;
}