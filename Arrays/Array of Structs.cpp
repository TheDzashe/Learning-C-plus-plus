#include <iostream> 

struct Student
{
    int studentNum;
    std::string fullName;
};


int main()
{
    int size=2;
    Student students[size];

    for(int i = 0; i < size; i++)
    {
        std::cout << "Enter the details for student " <<i+1 <<std::endl;
        std:: cout << std::endl;

        

        std::cout << "Enter the students full name: ";
        getline(std::cin, students[i].fullName);

        std::cout << "Enter the student number: ";
        std::cin >> students[i].studentNum;

        std::cin.ignore();
        /*the reason I have put the ignore function is because when after a value has been inputted with another cin statement, after 
        you have used the getline operator the compiler considers the input as empty so it will not read whatever value is related to that 
        getline operator again. So you gotta be careful.*/
    }

    for(int i =0; i <size; i++)
    {
        std::cout <<"____________";
        std::cout << "The details for Student " << i+1 << ":\n ";
        std::cout <<"Name: " << students[i].fullName <<std::endl;
        std::cout << "Student Number: " << students[i].studentNum << std::endl;
        std::cout << std::endl;
    }



}