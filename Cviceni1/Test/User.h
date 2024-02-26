#pragma once
#include <string>

using namespace std;

class User
{
private:
	string firstName;
	string lastName;
public:
	string getFullName() {
		return this->firstName + " " + this->lastName;
	};
};
