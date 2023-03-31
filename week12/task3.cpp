#include <iostream>
#include <fstream>
using namespace std;
char menu();
void addStudent(string firstname, string lastname, float cgpa, string rollno);
void viewStudent();
void storeStudents(string firstname, string lastname, float cgpa, string rollno);
void loadStudents();
string fname[100];
string lname[100];
float cgp[100];
string rollno1[100];
int studentCount = 0;
main()
{
    string firstname, lastname;
    float cgpa;
    string rollno;
    while (true)
    {
        char option = menu();
        if (option == '1')
        {
            cout << "Enter first name of student: ";
            cin >> firstname;
            cout << "Enter last name: ";
            cin >> lastname;
            cout << "Enter cgpa of student: ";
            cin >> cgpa;
            cout << "Enter roll no. of student: ";
            cin >> rollno;
            addStudent(firstname, lastname, cgpa, rollno);
            storeStudents(firstname, lastname, cgpa, rollno);
        }
        else if (option == '2')
        {
            viewStudent();
        }
    }
}
char menu()

{
    cout << "<Main menu>" << endl;
    cout << "|School management system|" << endl;
    cout << endl;
    cout << "1.Add student " << endl;
    cout << "2.View Student" << endl;
    char option;
    cout << "Enter your option: ";
    cin >> option;
    return option;
}
void addStudent(string firstname, string lastname, float cgpa, string rollno)
{
    fname[studentCount] = firstname;
    lname[studentCount] = lastname;
    cgp[studentCount] = cgpa;
    rollno1[studentCount] = rollno;
    studentCount++;
}
void storeStudents(string firstname, string lastname, float cgpa, string rollno)
{
    fstream file;
    file.open("Student.txt", ios::app);
    file << fname[studentCount] << endl;
    file << lname[studentCount] << endl;
    file << cgp[studentCount] << endl;
    file << rollno1[studentCount] << endl;
    file.close();
    studentCount++;
}
void viewStudent()
{
    cout << "First Name"
         << "\t"
         << "lastname"
         << "\t"
         << "cgpa"
         << "\t"
         << "rollno" << endl;
    for (int idx = 0; idx < studentCount; idx++)
    {
        cout << fname[idx] << "\t" << lname[idx] << "\t" << cgp[idx] << "\t" << rollno1[idx] << endl;
    }
}
void loadStudents()
{
    fstream file;
    string line;
    file.open("Student.txt", ios::in);
    while (file.eof())
    {
        getline(file, line);
        getline(file, line);
        stof(line);
        getline(file, line);
        getline(file, line);
        studentCount++;
    }
}