#include "Source.h"
#include <string>
#include <iostream>

using namespace std;

//This is the default constructor to set all the corresponding private members to their null states;
Source::Source() 
{ 


}

void Source::printStudentInformation() {

	cout << "The first name of the student is: " << first_Name << endl;
	cout << "The last name of the student is:  " << last_Name << endl;
	cout << endl;

}


//This is the default de-constructor to set all the corresponding private members to their null states;
Source::~Source()
{



}


int main() {
	string userFName;
	string userLName;


	cout << "welcome to Blake is a smeg" << endl;

	cout << "Please enter your first name" << endl;
	cin >> userFName;

	cout << "Please enter your last name" << endl;
	cin >> userLName;

		//Create an object of class inheritParent to pass in the new parameters into the program

		inheritParent STUDENT(userFName, userLName);	
		STUDENT.printStudentInformation();



	return 0;
}