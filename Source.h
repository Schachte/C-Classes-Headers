#include <string>
#include <iostream>

using namespace std;

class Source{

public: //Shit that can be accessed by any class anywhere within the program

	Source(); //Always define a default constructor to set all the private member variables to their null states

	Source(string first, string last); //Create an overload constructor to pass variables into the program to perform function

	void printStudentInformation();

	~Source(); //De-structor to de-allocate memory used in the program


private: //Shit that can only be accessed within the same class defintion


protected: //Shit that can only be accessed within the class itself and all the child classes associated with it

	string first_Name; //These can be accessed by any child classes
	string last_Name;  //These can be accessed by any child classes

};

//Here you can see the derived class "inheritParent" will inherit all the qualities of the "Source class"
//IT DOES NOT INHERIT THE CONSTRUCTOR OR DE-STRUCTOR, BUT YOU CAN PASS THESE PARAMETERS IN

class inheritParent : public Source {

public:
	inheritParent();   //Always define a default constructor to set all the private member variables to their null states

	inheritParent(string fName, string lName) : Source() {

		first_Name = fName;
		last_Name = lName;
	};

	~inheritParent(); //De-structor to de-allocate memory used in the program

	//I don't need a section for private or protected variables here because they are inheriting the provided protected variables
	//by the parent class of "inheritParent"

};