#include <string>
#include <array>
#include <vector>
#include <cstdlib>
#include <iostream>
#include "student.h"

using namespace std;



Student::Student() {
    int numCourses = 3;
    studentID = "";
    firstName = "";
    lastName = "";
    emailAddress = "";
    age = 0;
    daysInCourse1 = 0;
    daysInCourse2 = 0;
    daysInCourse3 = 0;
    //courses[numCourses] = {0, 0, 0};
    for (int i = 0; i < numCourses; i++) this->courses[i] = 0; 
    degreeProgram = DegreeProgram::SOFTWARE;
    
}

Student::Student(string studentID, string firstName, string lastName, string emailAddress,
    int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = emailAddress;
    this->age = age;
    this->daysInCourse1 = daysInCourse1;
    this->daysInCourse2 = daysInCourse2;
    this->daysInCourse3 = daysInCourse3;
}

Student::~Student() {
}

void Student::SetStudentID(string id) {
    this->studentID = id;
}
string Student::GetStudentID() {
    return this->studentID;
}

void Student::SetFirstName(string fName) {
    this->firstName = fName;
}
string Student::GetFirstName() {
    return this->firstName;
}

void Student::SetLastName(string lName) {
    this->lastName = lName;
}
string Student::GetLastName() {
    return this->lastName;
}

void Student::SetEmail(string email) {
    this->emailAddress = email;
}
string Student::GetEmail() {
    return this->emailAddress;
}

void Student::SetAge(int studentAge) {
    this->age = studentAge;
}
int Student::GetAge() {
    return this->age;
}

void Student::SetCourseDays(int daysInCourse1, int daysInCourse2, int daysInCourse3) {
    this->daysInCourse1 = daysInCourse1;
    this->daysInCourse2 = daysInCourse2;
    this->daysInCourse3 = daysInCourse3;
    courses[0] = daysInCourse1;
    courses[1] = daysInCourse2;
    courses[2] = daysInCourse3;
}
int* Student::GetCourseDays() {
    return this->courses;
}

void Student::SetDegreeProgram(DegreeProgram degreeProgram) {
    this->degreeProgram = degreeProgram;
}
DegreeProgram Student::GetDegreeProgram() {
    return this->degreeProgram;
}

void Student::print() {
    string degree = "SOFTWARE";
    
    if (degree == "NETWORK") {
        degreeProgram = DegreeProgram::NETWORK;
    } else if (degree == "SECURITY") {
        degreeProgram = DegreeProgram::SECURITY;
     }

    cout << GetStudentID() << "\t";
    cout << "First Name: " << GetFirstName() << "\t";
    cout << "Last Name: " << GetLastName() << "\t";
    cout << "Email: " << GetEmail() << "\t";
    cout << "Age: " << GetAge() << "\t";
    cout << "daysInCourse: " << GetCourseDays() << "\t";
    cout << "Degree Program: " << degree;

    cout << endl;
}

//for (int i = 0; i < numOfDaySize; i++) this->numOfDays[i] = 0;
//for (int i = 0; i < numOfDaySize; i++) this->numOfDays[i] = numOfDays[i];
