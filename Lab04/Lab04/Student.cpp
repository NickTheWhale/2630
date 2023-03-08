#include "Student.hpp"

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
	strcpy_s(name, size, copyIn.name);
}

// assignment operator
Student& Student::operator=(const Student& rhs)
{
	size_t size = strlen(rhs.name) + 1;
	name = new char[size];
	strcpy_s(name, size, rhs.name);
	return *this;
}

// Additional operators required
// *****************************
// less than the name of the passed Student (alphabetically), false otherwise
bool Student::operator<(const Student& rhs)
{
	if (rhs.name == nullptr || this->name == nullptr)
		return false;

	int i = 0;
	while (rhs.name[i] != '\0' && this->name[i] != '\0') {
		if (rhs.name[i] > this->name[i]) {
			return true;
		}
		i++;
	}
	return false;
}

// is equal to, returns true if name is the same as the name of
// the passed Student, false otherwise
bool Student::operator==(const Student& rhs)
{
	if (rhs.name == nullptr || this->name == nullptr)
		return false;

	int i = 0;
	while (rhs.name[i] != '\0' && this->name[i] != '\0') {
		if (rhs.name[i] != this->name[i]) {
			return false;
		}
		i++;
	}
	return true;
}

// returns true if name is the not the same as the name of
// the passed Fruit, false otherwise(This is a one liner!)
bool Student::operator!=(const Student& rhs)
{
	if (rhs.name == nullptr || this->name == nullptr)
		return false;

	int i = 0;
	while (rhs.name[i] != '\0' && this->name[i] != '\0') {
		if (rhs.name[i] == this->name[i]) {
			return false;
		}
		i++;
	}
	return false;
}

// writes the name, left - justified, in a field of 30, then a space
// To print left justified to the output stream os :
// os << setiosflags(ios::left) << setw(MAX_NAME_LEN) << ...
std::ostream& operator<<(std::ostream& out, const Student& rhs)
{

	// must always pass back the ostream (cout << "hello" << "this enables chaining" << "just like other operators";)
	return out;
}

// reads a one-word name from the input stream, allocates memory and stored the name in the Student rhs object
std::istream& operator>>(std::istream& in, Student& rhs)
{

	// must always pass back the ostream (cin >> A >> B >> C; // allows chaining like other operators!)
	return in;
}