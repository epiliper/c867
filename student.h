#ifndef STUDENT
#define STUDENT

#include <string>
#include <vector>
#include "student.h"
#include "degree.h"

class Student{

	public:
		//setters
		void setStudentID(std::string sid);
		void setFirstName(std::string fn);
		void setLastName(std::string ln);
		void setEmailAddress(std::string ea);
		void setAge(int age);

		void setDaysInCourse1(int dic1);
		void setDaysInCourse2(int dic2);
		void setDaysInCourse3(int dic3);


		void setDegreeProgram(DegreeProgram dp);

		//getters
		std::string getStudentID() const;
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getEmailAddress() const;
		int getAge() const;
		std::vector<int> getDaysInCourse() const;
		
		int getDaysInCourse1() const;
		int getDaysInCourse2() const;
		int getDaysInCourse3() const;


		DegreeProgram getDegreeProgram() const;

		//print
		void print() const;

		//constructor
		Student(std::string sid, std::string fn, std::string ln, std::string ea, int age, int dic1, int dic2, int dic3, DegreeProgram dp);

	private:

		std::string StudentID;
		std::string FirstName;
		std::string LastName;
		std::string EmailAddress;
		int Age;
		int daysInCourse1;
		int daysInCourse2;
		int daysInCourse3;
		DegreeProgram DegreeProgram;

};


#endif
