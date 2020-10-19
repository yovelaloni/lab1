#include "WorkingStudent"

WorkingStudent::WrokingStudent() : same_institute(false) {};

WrokingStudent::WorkingStudent(string name, long id, int age, int average, string institute, float salary, bool same_inst) :Person(name,id,age), Student(average, institute), Employee(salary) {
	same_institute = same_inst;
}

WorkingStudent::WorkingStudent(const WorkingStudent& other) :Person(other), Student(other), Employee(other) {
	same_institute = other.same_institute;
}

void WorkingStudent::print() const {
	Person::print();
	cout << "salary: " << *this.salary << endl;
	cout << "average: " << *this.average << endl;
	cout << "institute: " << *this.institute << endl;
}

bool WorkingStudent::getSameInstitute() const{
	return same_institute;
}