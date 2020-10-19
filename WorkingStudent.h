#pragma once
#include "Student.h"
#include "Employee.h"
#include "Person.h"

class WorkingStudent : public Student, public Employee {
private:
	bool same_institute;


public:
	WorkingStudent();
	WorkingStudent(string, long, int, int,string,float , bool);
	WorkingStudent(const WorkingStudent&);
	~WorkingStudent();

	void print() const;
	bool getSameInstitute() const;

};