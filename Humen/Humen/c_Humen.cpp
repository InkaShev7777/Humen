#include "c_Humen.h"
#include<iostream>
c_Humen::c_Humen()
{
	this->name = (char*)"Ilya";
	this->surname = (char*)"Shevchenko";
	this->age = 19;
}

c_Humen::c_Humen(char* name, char* surname, int age)
{
	this->name = name;
	this->surname = surname;
	this->age = age;
}

