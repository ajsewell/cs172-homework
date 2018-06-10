// Project Name: Course
// Name: Allysa Sewell
// Date: 5/28/16
// Class: CS 172

#include <iostream>
#include "Course.h"
using namespace std;

// 14/20

// constructs Course object
Course::Course(const string& courseName, int capacity)
{
  numberOfStudents = 0;
  this->courseName = courseName;
  this->capacity = capacity;
  students = new string[capacity];
}

//deletes course object
Course::~Course()
{
  delete[] students;
}

//copies contents from an object to a new object
Course::Course(const Course& course)
{
  courseName = course.courseName;
  numberOfStudents = course.numberOfStudents;
  capacity = course.capacity;
  students = new string[capacity];
  
  //PT -- copy the students over
  // -2
  /*
  for (int i=0; i<numberOfStudents; i++) {
    students[i] = course.students[i];
  }
  */
}

//accessor function for courseName
string Course::getCourseName() const
{
  return courseName;
}

//adds a student to to course and increases capacity if necessary
void Course::addStudent(const string& name)
{
  if (numberOfStudents >= capacity)
  {
    //doubles the capacity of the array
    string* newStudents = new string[capacity * 2];
    //adds values from the old array to the new array
  for (int i = 0; i < capacity; i++)
    newStudents[i] = students[i];
  //PT -- almost. delete students, then assign students to newStudents
  // -2
  /*
  delete[] students;
  students = newStudents;
  */
  students = newStudents;
  delete [] newStudents;
  }
  students[numberOfStudents] = name;
  numberOfStudents++;

}

//drops a student by creating a new array without the dropped student
void Course::dropStudent(const string& name)
{
  string* p = find(students, students + numberOfStudents, name);
  string* oldStudents = students;
  //PT -- this is ok, but better to just keep the old array and slide the students after 
  //      the student to delete back one slot
  /*
  int i=0;
  while (i < numberOfStudents && students[i] != name)
    i++;
    
  for (; i<numberOfStudents-1; i++) {
    students[i] = students[i+1];
  }
  */
  
  string* newStudents = new string[capacity];
  numberOfStudents--;
  for (int i = 0; i < numberOfStudents; i++)
  {
    if (i < (p - students))
      newStudents[i] = students[i];
    if (i >= (p - students))
      newStudents[i] = students[i + 1];
  }
  students = newStudents;
 

}

//removes all students from the course
void Course::clear()
{
  for (int i = 0; i < numberOfStudents; i++)
    students[i].clear();
  //PT -- Removing all students means that there are no more students
  // -2
  /*
  numberOfStudents = 0;
  */
}

//accessor function for students
string* Course::getStudents() const
{
  return students;
}

//accessor function for numberOfStudents
int Course::getNumberOfStudents() const
{
  return numberOfStudents;
}





