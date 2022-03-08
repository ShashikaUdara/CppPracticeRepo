/*
The meaning of Encapsulation, is to make sure that "sensitive" 
data is hidden from users. To achieve this, you must declare 
class variables/attributes as private (cannot be accessed from outside the class). 
If you want others to read or modify the value of a private member, you can provide 
public get and set methods.
*/

#include <iostream>
#include <string>

using namespace std;

class EncapsulationClass
{
public:
	EncapsulationClass();
	~EncapsulationClass();
	void setEmployName(string name);
	string getEmployName();
	void setCompanyName(string cName);
	string getCompanyName();

private:
	string eName = "";
	string cName = "";
};