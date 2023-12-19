#include <string>
#include <vector>
#include "student.h"
#include <iostream>
#include "degree.h"

using namespace std;


//constructor definition
Student::Student(string sid, string fn, string ln, string ea, int age, int dic1, int dic2, int dic3, enum DegreeProgram dp){
	StudentID = sid;
	FirstName = fn;
	LastName = ln;
	EmailAddress = ea;
	Age = age;
	daysInCourse1 = dic1;
	daysInCourse2 = dic2;
	daysInCourse3 = dic3;
	DegreeProgram = dp;
}

//array of strings indexed by enum

 string degreeValues[3] = {"SECURITY", "NETWORK", "SOFTWARE"};

//setter definitions 
void Student::setStudentID(string sid){
	StudentID = sid;
}

void Student::setFirstName(string fn){
	FirstName = fn;
}

void Student::setLastName(string ln){
	LastName = ln;
}

void Student::setAge(int age){
	Age = age;
}

void Student::setDaysInCourse1(int dic1) {
	daysInCourse1 = dic1;
}

void Student::setDaysInCourse2(int dic2) {
	daysInCourse2 = dic2;
}

void Student::setDaysInCourse3(int dic3) {
	daysInCourse3 = dic3;
}

void Student::setDegreeProgram(enum DegreeProgram dp){
	DegreeProgram = dp;
}

//getter defintions 
string Student::getStudentID() const {
	return StudentID;
}

string Student::getFirstName() const {
	return FirstName;
}

string Student::getLastName() const {
	return LastName;
}

string Student::getEmailAddress() const {
	return EmailAddress;
}

int Student::getAge() const {
	return Age;
}

int Student::getDaysInCourse1() const {
	return daysInCourse1;
}

int Student::getDaysInCourse2() const {
	return daysInCourse2;
}

int Student::getDaysInCourse3() const {
	return daysInCourse3;
}

DegreeProgram Student::getDegreeProgram() const {
	return DegreeProgram;
}

//print function
//
void Student::print() const {
	cout << StudentID << '\t';
	cout << FirstName << '\t'; 
	cout << LastName << '\t';
	cout << EmailAddress << '\t';
	cout << Age << '\t';
	cout << daysInCourse1 << '\t';
	cout << daysInCourse2 << '\t';
	cout << daysInCourse3 << '\t';
	cout << degreeValues[DegreeProgram] << '\t';
	cout << endl;

}




