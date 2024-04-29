#pragma once
#include <string>
class Printable  // pure abstract class
{
public:
  
	virtual std::string ToString() = 0;  // pure virtual method
};
