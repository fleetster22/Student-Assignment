
#include <string>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <array>

using namespace std;;


//#include "student.h"
#include "roster.h"
//#include "degree.h"


int main() {

    const string studentData[] =
        {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Anaka,Norfleet,anorfl2@wgu.edu,48,42,28,42,SOFTWARE"
        };

    
    cout << "C867 Scripting & Programming: Applications" << endl;
    cout << "Language: C++" << endl;
    cout << "Student ID: 001528537" << endl;
    cout << "Name: Anaka Norfleet" << endl;

    
    Roster classRoster; // DO NOT CHANGE
    int numRoster = 5;
    //int numOfCourses = 3; 

    for (int i = 0; i < numRoster; i++) classRoster.parse(studentData[i]); 

    for (int i = 0; i < numRoster; i++) classRoster.add(studentData[i]); ///Need to fix this

    cout << "Roster of all students: " << endl;
    classRoster.printAll();

    //for (int i = 0; i < numOfCourses; i++) {
    //    DegreeProgram degreeProgram[i] = program[i];
    //}


    cout << "Students with invald emails: ";
    classRoster.printInvalidEmails();

    for (int i = 0; i < numRoster; i++) {
        classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i]->GetStudentID());
    }

    cout << "Software Students: ";
    classRoster.printByDegreeProgram(DegreeProgram::SOFTWARE);

    cout << "Removing student with ID 'A3'";
    classRoster.remove("A3");

    cout << "Updated roster of all students: ";
    classRoster.printAll();

    cout << "Try to remove student with ID that no longer exists" << endl;
    classRoster.remove("A3");

    cout << "Releasing memory";
    classRoster.~Roster();
   

    return 0;
}