#include "Person.h"

Person::Person() :Name("unknown"), age(0), id(0)
{
}

Person::Person(const Person& other)
{
	Name = other.Name;
	age = other.age;
	id = other.id;

}

Person::Person(string name, int age1, long ID) :Name(name), age(age1), id(ID) {
}

void Person::print()const
{	//print name and id
	cout << "name: " << Name << " " << endl;
	cout << "id: " << id << endl;
	cout << "age: " << age << endl;
}

long Person::getId() const
{
	return id;
}
