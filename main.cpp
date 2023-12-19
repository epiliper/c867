#include <iostream> 
#include "roster.h"
#include "student.h"
#include "degree.h"

int main() {
	
	// printing out my Student details
	cout << "My student details:" << endl;
	Student* me = new Student("A5", "Eli", "Piliper", "peli@wgu.edu", 21, 31, 21, 52, SOFTWARE);

	me -> print();

	cout << endl;

	//creating classRoster, adding Students
	Roster classRoster;
	
	const std::string studentData[5] = {
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", 
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", 
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", 
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", 
		"A5,Eli,Piliper,peli@wgu.edu,21,31,21,52,SOFTWARE"
	};

	classRoster.populateRoster(studentData);

	/* classRoster.printAll(); */

	cout << "Average days in course by Student ID:" << endl;

	for (int i = 0; i < 5; i++){

		/* cout << classRoster.classRosterArray[i]->getStudentID() << endl; */

		classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i] -> getStudentID());

	}

	cout << endl;

	//which students have invalid emails? 
	
	classRoster.printInvalidEmails();
	cout << endl;

	cout << "List of students seeking software degree:" << endl;
	classRoster.printByDegreeProgram(SOFTWARE);
	cout << endl;


	//Removing Students from classRoster
	classRoster.remove("A3");
	cout << endl;

	//printing all again
	classRoster.printAll();
	cout << endl;

	classRoster.remove("A3");
	cout << endl;



	//destructor was automatically implemented, as classRoster was initialized without "new" keyword











}
