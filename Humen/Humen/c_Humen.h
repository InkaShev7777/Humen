#pragma once
#include<iostream>
class c_Humen
{
protected:
	char* name;
	char* surname;
	int age;
public:
	c_Humen();
	c_Humen(char* name, char* surname, int age);
	friend std::ostream& operator<<(std::ostream& out,const c_Humen& hum)
	{
		std::cout << "Name: "<<hum.name<<"\tSurname: "<<hum.surname<<"\tAge: "<<hum.age<<"\n";
		return out;
	}
};

