// Project Name: Course
// Name: Allysa Sewell
// Date: 5/28/16
// Class: CS 172

#include "Course.h"
#include <iostream>
using namespace std;

int main()
{
  //creates Course object with name Computer Science
  //and a capacity of 10
  Course course1("Computer Science", 10);

  //adds 3 students to the course
  //used name generator on Behind the Name.com
  course1.addStudent("Alexandra Salcedo");
  course1.addStudent("Dave Winfield");
  course1.addStudent("Jolene Leigh");

  //removes a student from the class
  course1.dropStudent("Alexandra Salcedo");

  //displays the students in the course
  cout << "The students in " << course1.getCourseName() << 
  " are: " << endl;
  string* students = course1.getStudents();
  for (int i = 0; i < course1.getNumberOfStudents(); i++)
    cout << students[i] << endl;

  return 0;

}
