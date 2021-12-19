#pragma once
#include<iostream>
class c_Humen
{
protected:
	char name[50];
	char surname[50];
	int age;
public:
	c_Humen();
	friend std::ostream& operator<<(std::ostream& out,const c_Humen& hum)
	{
		std::cout << "Name: "<<hum.name<<"\tSurname: "<<hum.surname<<"\tAge: "<<hum.age<<"\n";
		return out;
	}
	friend std::istream& operator>>(std::istream& in, c_Humen& hum)
	{
		std::cin.clear();
		std::cout << "Vvedite name: ";
		in.getline(hum.name, 50);
		std::cout << "Vvedite surname: ";
		in.getline(hum.surname, 50);
		std::cout << "Vvedite age: ";
		in >> hum.age;
		return in;
	}
};

