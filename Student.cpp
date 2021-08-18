#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;
// Assign studentId and name
void Student::assignDetails(int sId , const char sname[]) {
  studentID = sId;
  strcpy(name , sname);
}

// Display StudentId and Name
void Student::display() {
  cout << "student ID" << studentID <<endl;
  cout << "student name" << name << endl;
}
