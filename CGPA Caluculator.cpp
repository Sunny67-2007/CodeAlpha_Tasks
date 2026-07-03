#include <iostream>
using namespace std;

int main()
{
    int numCourses;
    float grade, creditHours;
    float totalCredits = 0, totalGradePoints = 0;
    float gpa, cgpa;

    cout << "Enter the number of courses: ";
    cin >> numCourses;

    float grades[100], credits[100];

    for (int i = 0; i < numCourses; i++)
    {
        cout << "\nCourse " << i + 1 << endl;

        cout << "Enter Grade Point: ";
        cin >> grade;

        cout << "Enter Credit Hours: ";
        cin >> creditHours;

        grades[i] = grade;
        credits[i] = creditHours;

        totalCredits += creditHours;
        totalGradePoints += grade * creditHours;
    }

    gpa = totalGradePoints / totalCredits;
    cgpa = gpa;   // Assuming only one semester

    cout << "\n----- Course Details -----" << endl;
    for (int i = 0; i < numCourses; i++)
    {
        cout << "Course " << i + 1
             << " : Grade = " << grades[i]
             << ", Credit Hours = " << credits[i] << endl;
    }

    cout << "\n----- Results -----" << endl;
    cout << "Total Credits: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalGradePoints << endl;
    cout << "Semester GPA: " << gpa << endl;
    cout << "Overall CGPA: " << cgpa << endl;

    return 0;
}
