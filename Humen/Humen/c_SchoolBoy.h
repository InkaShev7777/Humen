#pragma once
#include"c_Humen.h"
class c_SchoolBoy : public c_Humen
{
protected:
	int clas;
	int kol_of_lessons;
public:
	friend std::istream& operator>>(std::istream& in, c_SchoolBoy& boy)
	{
		std::cout << "VVedite class: ";
		in >> boy.clas;
		std::cout << "VVedite kol.of lessons: ";
		in >> boy.kol_of_lessons;
		return in;
	}
	friend std::ostream& operator<<(std::ostream& out, const c_SchoolBoy& boy)
	{
		std::cout << "\nSCHOOLBOY\n---------\n";
		out << "Name: " << boy.name << "\tSurname: " << boy.surname << "\tAge: " << boy.age << "\n";
		out << "Class: "<<boy.clas<<"\tKol.of lessons: "<<boy.kol_of_lessons<<"\n";
		return out;
	}
};

