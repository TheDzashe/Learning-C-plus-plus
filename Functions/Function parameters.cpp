#include <iostream>

void assignValue(int a, int b = 30)
{
    std::cout << "Before assignment: " << std::endl;
    std::cout << "a = " << a <<std::endl;
    std::cout << "b = " << b << std::endl;

    a = b;

    std::cout << "After assignment: " << std::endl;
    std::cout << "a = " << a <<std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << std::endl;
}

int main()
{
    int x = 10;
    int y;

    std::cout << "Before function call" << std::endl;
    std::cout << "x = " << x <<std::endl;
    std::cout << "y = " << y << std::endl;
    std::cout << std::endl;

    assignValue(60);

    std::cout << "After function call" << std::endl;
    std::cout << "x = " << x <<std::endl;
    std::cout << "y = " << y << std::endl;

    return 0;
}