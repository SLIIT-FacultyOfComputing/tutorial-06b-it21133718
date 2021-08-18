#include "Student.h"
#include <iostream>
#include<cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int StId ,const char *stname) {
   studentId =  StId ;
  strcpy(name, stname);
}

// Display StudentId and Name
void Student::display() {
    cout << "Student ID \t :" << studentId << endl;

    cout << "Student Name :" << name << endl ;
}