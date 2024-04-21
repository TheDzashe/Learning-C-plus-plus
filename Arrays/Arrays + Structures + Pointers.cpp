#include <iostream>

struct Student
{
    std::string studentName;
    int studentNum;
};

Student addStudent()
{
    Student students; 
    std::cout << "Enter the student name:" << std::endl;
    std:: cin >> students.studentName;
    
    std:: cout << "Enter the student number: " <<std::endl;
    std:: cin >> students.studentNum;
    
    return(students);
}

void printStudents(Student students[], int size)
{
    for (int i = 0; i <size; i++)
    {
        std::cout << "The details for student " << i+1 << std::endl;
        std::cout << "Name: " << students[i].studentName <<std::endl;
        std::cout << "Student Number: " << students[i].studentNum <<std::endl;
    }
}

int main()
{
    int size;
    std::cout << "Enter the size of array:";
    std::cin >> size;
    
    Student students[size];
    std::cout << "__Enter the Student details__" <<std::endl;
    for(int i =0; i <size; i++)
    {
        std::cout << "Student " << i+1 <<": " <<std::endl;
        
        students[i] = addStudent(); 
    }
    
    printStudents(students, size);
}