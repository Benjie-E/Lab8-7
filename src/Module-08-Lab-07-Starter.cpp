//
//  Module-08-Lab-07.cpp
//  Inheritance (the basics)
//

#include <iostream>
#include <string>

using namespace std;

enum Discipline {
	UNKNOWN=0,COMPUTER_SCIENCE, NETWORKING_SECURITY
};

const string DISCIPLINE_STRINGS[3]= {"UNKNOWN", "Computer Science", "Networking Security", // TODO replace with your major name
		};

class Person {
public:
	Person() {
		cout << "Person object created using the default Person constructor"
				<< endl;
	}
	Person(string name) {
		cout << "Person object created using the alternate Person constructor"
				<< endl;
		setName(name);
	}
	~Person() {
		cout << "Person object destroyed" << endl;
	}
	const string& getName() const {
		return name;
	}
	void setName(const string &name) {
		this->name=name;
	}
private:
	string name="Unknown";
};

class Faculty: public Person {
public:
	Faculty() {
		cout << "Faculty object created using the default Faculty constructor"
				<< endl;
	}
	Faculty(string name, Discipline department) {
		cout << "Faculty object created using the alternate Faculty constructor"
				<< endl;
		setName(name);
		setDepartment(department);
	}
	~Faculty() {
		cout << "Faculty object destroyed" << endl;
	}
	string getDepartment() const {
		return DISCIPLINE_STRINGS[department];
	}
	void setDepartment(Discipline department) {
		this->department=department;
	}
private:
	Discipline department=UNKNOWN;
};

class Student: public Person {
public:
	Student() {
		cout << "Student object created using the default Student constructor"
				<< endl;
	}
	Student(string name, Discipline major) {
		cout << "Student object created using the alternate Student constructor"
				<< endl;
		setName(name);
		setMajor(major);
	}
	~Student() {
		cout << "Student object destroyed" << endl;
	}
	string getMajor() const {
		return DISCIPLINE_STRINGS[major];
	}
	void setMajor(Discipline major) {
		this->major=major;
	}
private:
	Discipline major=UNKNOWN;
};
int main() {
	Faculty prof("Ada Lovelace ", COMPUTER_SCIENCE);
	Student stu("Benjie Eisen", NETWORKING_SECURITY);

	cout << endl << "I, " << stu.getName() << ", am majoring in "
			<< stu.getMajor() << "." << endl;
	cout << "I am taking CSI 240 with Prof. " << prof.getName()
			<< ", who teaches " << prof.getDepartment() << " courses." << endl
			<< endl;

	return 0;
}
