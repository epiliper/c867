#ifndef ROSTER
#define ROSTER

#include <string>
#include "student.h"
/* #include "degree.h" */
#include <array>

using namespace std;


class Roster{
	public:
		array<Student*, 15> classRosterArray;
		int arrayLength = 0;

		void populateRoster(const string rawData[5]);

		void add(
				string StudentID,
				string firstName, 
				string lastName, 
				string emailAddress,
				int age,
				int daysInCourse1,
				int daysInCourse2,
				int daysInCourse3,
				DegreeProgram degreeProgram
			);


		void remove(string StudentID);

		void printAverageDaysInCourse(string StudentID);

		void printAll();

		void printInvalidEmails();

		void printByDegreeProgram(DegreeProgram degreeProgram);

		~Roster();

};

#endif
