#include "Student.hpp"
#include <cstring>

// default constructor
Student::Student()
{

}

// The Big3
// destructor
Student::~Student()
{
	if (name != nullptr) {
		delete[] name;
		name = nullptr;
	}
}

// copy constructor
Student::Student(const Student& copyIn)
{
	size_t size = strlen(copyIn.name) + 1;
	name = new char[size];
	strcpy(name, copyIn.name);
}

// assignment operator
Student& Student::operator=(const Student& rhs)
{
	size_t size = strlen(rhs.name) + 1;
	name = new char[size];
	strcpy(name, rhs.name);
	return *this;
}

// Additional operators required
// *****************************
// less than the name of the passed Student (alphabetically), false otherwise
bool Student::operator<(const Student& rhs)
{
	return std::strcmp(name, rhs.name) < 0;
}

// is equal to, returns true if name is the same as the name of
// the passed Student, false otherwise
bool Student::operator==(const Student& rhs)
{
	return std::strcmp(name, rhs.name) == 0;
}

// returns true if name is the not the same as the name of
// the passed Fruit, false otherwise(This is a one liner!)
bool Student::operator!=(const Student& rhs)
{
	return std::strcmp(name, rhs.name) != 0;
}

// writes the name, left - justified, in a field of 30, then a space
// To print left justified to the output stream os :
// os << setiosflags(ios::left) << setw(MAX_NAME_LEN) << ...
std::ostream& operator<<(std::ostream& out, const Student& rhs)
{

	out << std::setiosflags(std::ios::left) << std::setw(Student::MAX_NAME_LEN) << rhs.name << " ";
	// must always pass back the ostream (cout << "hello" << "this enables chaining" << "just like other operators";)
	return out;
}

// reads a one-word name from the input stream, allocates memory and stored the name in the Student rhs object
std::istream& operator>>(std::istream& in, Student& rhs)
{
	if (rhs.name != nullptr)
		delete[] rhs.name;
	
	std::string temp;
	in >> temp;
	
	size_t size = temp.length() + 1;
	rhs.name = new char[size];
	strcpy(rhs.name, temp.c_str());

	// must always pass back the ostream (cin >> A >> B >> C; // allows chaining like other operators!)
	return in;
}