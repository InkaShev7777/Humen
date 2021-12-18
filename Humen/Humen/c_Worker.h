#pragma once
#include"c_Humen.h"
class c_Worker : public c_Humen
{
protected:
	float salary;
	char position[50];
public:
	c_Worker();
	friend std::istream& operator>>(std::istream& in, c_Worker& wor)
	{
		std::cout << "Vvedite salary: ";
		in >> wor.salary;
		std::cout << "Vvedite position: ";
		in.ignore();
		in.getline(wor.position, 50);
		return in;
	}
	friend std::ostream& operator<<(std::ostream& out, c_Worker& wor)
	{
		out << "WORKER\n";
		out << "--------\n";
		out << "Name: " << wor.name << "\tSurname: " << wor.surname << "\tAge: " << wor.age << "\n";
		out << "Position: " << wor.position << "\tSalary: " << wor.salary << "\n\n";
		return out;
	}
};

