//this is a program for a user to input details about an employee

#include <iostream>

struct Employee
{
    int id;
    std::string name;
};

Employee addEmployee(Employee E)
{
    std::cout << "Enter the employee ID: ";
    std:: cin>> E.id;
    
    std::cout << "Enter the employee name: ";
    std::cin >> E.name;
    
    return(E);
}

void employeePrint(Employee emp)
{
    std::cout << "The employee ID is: " << emp.id <<std::endl;
    std::cout << "The employee name is: " << emp.name;
}

int main()
{
    Employee emp;

    emp= addEmployee(emp);

    employeePrint(emp);

    
}