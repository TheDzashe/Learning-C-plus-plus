#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;
    int studentMarks[SIZE];
    int student;

    for (int index = 0; index <SIZE; index++)
    {
        student = index + 1; // this ensures that the teacher knows what student number they are entering
        cout << "Please enter mark for student " << student << " here: ";
        cin >> studentMarks[index];
    }
    cout << "______________________________________________";
    for (int value: studentMarks)
    {
        cout << "Student " << student << " has a mark of " << value << endl;
    }
    return 0;
}

