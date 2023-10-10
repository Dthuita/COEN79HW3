#include <iostream>
#include <fstream>
#include "scuclass.h"

using namespace coen79_hw3;
using namespace std;

int main(int argc, char* argv[]) {
    SCUClass coen79;
    
    ifstream inputFile(argv[0]);

    if (inputFile.is_open())
    {
        while (!inputFile.eof())
        {
            string studentID, firstName, lastName;

            inputFile >> studentID >> firstName >> lastName;

            Student student;
            student.setStudentID(studentID);
            student.setFirstName(firstName);
            student.setLastName(lastName);

            coen79.addStudent(student);
        }

        inputFile.close();

        coen79.list();
    }
    return 0;
    // Example:
    // coen79.addStudent(/* student information here */);
    // coen79.erase(/* some kinds of ID */);
    // coen79.list();

    return 0;
}

