#pragma once
#include "c_Humen.h"
class c_Student : public c_Humen
{
protected:
	float step;
	int kurs;
public:
	c_Student();
	friend std::istream& operator>>(std::istream& in, c_Student& stud)
	{
		std::cin.clear();
		std::cout << "Vvedite name: ";
		in.getline(stud.name, 50);
		std::cout << "Vvedite surname: ";
		in.getline(stud.surname, 50);
		std::cout << "Vvedite age: ";
		in >> stud.age;
		std::cout << "VVedite scholarship: ";
		in >> stud.step;
		std::cout << "VVedite nom.kurs: ";
		in >> stud.kurs;
		return in;
	}
	friend std::ostream& operator<<(std::ostream& out, const c_Student& stud)
	{
		out << "\nSTUDENT\n--------\n";
		out << "Name: " << stud.name << "\tSurname: " << stud.surname << "\tAge: " << stud.age << "\n";
		out << "Scholarship: "<<stud.step<<"\tKurs: "<<stud.kurs<<"\n\n";
		return out;
	}
};

