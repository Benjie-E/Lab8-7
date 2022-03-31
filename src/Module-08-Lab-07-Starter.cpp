//
//  Module-08-Lab-07.cpp
//  Inheritance (the basics)
//

#include <iostream>
#include <string>

using namespace std;

enum Discipline {
    COMPUTER_SCIENCE,
    YOUR_MAJOR
};

const string DISCIPLINE_STRINGS[2] = {
    "Computer Science",
    "YOUR_MAJOR", // TODO replace with your major name
};

/* Class definitions here */

int main()
{

    Faculty prof("Ada Lovelace ", COMPUTER_SCIENCE);
    Student stu("YOUR_NAME", YOUR_MAJOR);

    cout << endl
         << "I, " << stu.getName() << ", am majoring in " << stu.getMajor() << "." << endl;
    cout << "I am taking CSI 240 with Prof. " << prof.getName() << ", who teaches "
         << prof.getDepartment() << " courses." << endl
         << endl;

    return 0;
}
