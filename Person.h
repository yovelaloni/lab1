#ifndef PERSON
#define PERSON
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;

class Person
{
protected:
	string Name;
	int age;
	long id;


public:
	Person();
	Person(const Person&);
	Person(string, int,long);
	virtual void print()const = 0;
	virtual ~Person() {};
	virtual long getId()const;
};


#endif
