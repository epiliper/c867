#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <array>
#include "roster.h"
#include "degree.h"



using namespace std;


// iterate through each student record
void Roster::populateRoster(const string rawData[5]){

	for (int i = 0; i < 5; i++) {
		
		//create list of Student parameters by parsing records with istringstream
		istringstream studentData_raw(rawData[i]);
		string listitem;
		vector<string> inputParams;
		DegreeProgram inputdp;

		while(getline(studentData_raw, listitem, ',')){
			if (listitem == "SECURITY"){
				inputdp = SECURITY;
			} else if (listitem == "NETWORK"){
				inputdp = NETWORK;
			} else if (listitem == "SOFTWARE"){
				inputdp = SOFTWARE;
			} else {
			inputParams.push_back(listitem);
			}	
		}

		//initialize Student with params from list
		classRosterArray[i] = new Student(
				inputParams[0], 
				inputParams[1],
				inputParams[2],
				inputParams[3], 
				stoi(inputParams[4]),
				stoi(inputParams[5]),
				stoi(inputParams[6]),
				stoi(inputParams[7]),
				inputdp);

		arrayLength += 1;

	}
}

// add new Student class to classRosterArray
void Roster::add(string studentID, 
		string firstName, 
		string lastName, 
		string emailAddress, 
		int age, 
		int daysInCourse1, 
		int daysInCourse2, 
		int daysInCourse3, 
		DegreeProgram degreeprogram){

	for (int i = 0; i < 5; i++){
		if (classRosterArray[i]==0){
			classRosterArray[i] = new Student(
					studentID,
					firstName,
					lastName,
					emailAddress, 
					age, 
					daysInCourse1, 
					daysInCourse2, 
					daysInCourse3,
					degreeprogram);

				
		} else {
			continue;
		}


	}

}

//delete Student object from array by StudentID
void Roster::remove(string StudentID){
	bool replaced = false;

	cout << "removing Student ID: " << StudentID << endl;
	for (int i = 0; i < 5; i++){

		if (classRosterArray[i] == 0){
			continue;
		} else if (classRosterArray[i] -> getStudentID() == StudentID){
			classRosterArray[i] = 0;
			replaced = true;
			break;
		}

	}

	if (!replaced) {
		cout << "ERROR: Student ID not found!" << endl;
	}




		}



//print average days in course by studentID
void Roster::printAverageDaysInCourse(string studentID){
	for (int i = 0; i < 5; i++){
		if (classRosterArray[i] -> getStudentID() == studentID) {
			cout << classRosterArray[i] -> getStudentID() << ": " << ((classRosterArray[i] -> getDaysInCourse1() + classRosterArray[i] -> getDaysInCourse2() + classRosterArray[i] -> getDaysInCourse3()) / 3) << endl;
		} 
	}
}

//printAll
void Roster::printAll(){
	cout << "Printing all roster members:" << endl;
	for (int i=0; i<5; i++){
		if (classRosterArray[i] == 0){
			continue;
		} else {
		classRosterArray[i] -> print();
		cout << endl;
		}
	}
}

//printInvalidEmails
void Roster::printInvalidEmails(){
	cout << "Listing students with invalid emails:" << endl;
	for (int i=0; i<5; i++){
		if (
				(classRosterArray[i] -> getEmailAddress().find('@') != string::npos) 
				&& 
				(classRosterArray[i] -> getEmailAddress().find('.') != string::npos)
				&& 
				(classRosterArray[i] -> getEmailAddress().find(' ')==string::npos))
		   {
			continue;
		} else {
			cout << classRosterArray[i] -> getStudentID() << ": " << classRosterArray[i] -> getEmailAddress() << endl;
		}
	}
}

//printByDegreeProgram
void Roster::printByDegreeProgram(DegreeProgram degreeProgram){
	for (int i=0; i<5; i++){
		if (classRosterArray[i] -> getDegreeProgram() == degreeProgram){
			cout << classRosterArray[i] -> getStudentID() << endl;	
		} else {
			continue;
		}
	}

}

Roster::~Roster(){
}









