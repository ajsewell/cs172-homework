// Project Name: Course
// Name: Allysa Sewell
// Date: 5/28/16
// Class: CS 172

#ifndef COURSE_H_
#define COURSE_H_
#include <string>
using namespace std;

class Course
{
public:
  Course(const string& courseName, int capacity);
  ~Course();
  Course(const Course&);
  string getCourseName() const;
  void addStudent(const string& name);
  void dropStudent(const string& name);
  void clear();
  string* getStudents() const;
  int getNumberOfStudents() const;

private:
  string courseName;
  string* students = NULL;
  int numberOfStudents;
  int capacity;
};

#endif
