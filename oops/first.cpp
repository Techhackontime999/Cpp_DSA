#include <iostream>
using namespace std;
class Student
{
public:
    int roll;
    string name;
    float cgpa;
    void greet()
    {
        cout << "Hello dosto !" << endl;
    }
};

// typedef struct Student
// {
//     int roll;
//     string name;
//     float cgpa;
//     void greet()
//     {
//         cout << " Hello dosto !" << endl;
//     }

// } Student;

int main()
{
    Student s1, s2, s3;
    s1.roll = 01;
    s1.name = "Amit Kumar";
    s1.cgpa = 9.2;
    s2.roll = 02;
    s2.name = "Sumit Kumar";
    s2.cgpa = 7.0;
    s3.roll = 03;
    s3.name = "Rohit Kumar";
    s3.cgpa = 5;
    s1.greet();
    cout << s1.roll << " " << s1.name << " " << s1.cgpa << endl;
    s1.greet();
    cout << s2.roll << " " << s2.name << " " << s2.cgpa << endl;
    s1.greet();
    cout << s3.roll << " " << s3.name << " " << s3.cgpa << endl;
    return 0;
}