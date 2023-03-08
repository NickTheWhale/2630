#pragma once
#include <iostream>     // cout / cin / etc.
#include <string>       // for making our life easier by using strings
#include <iomanip>      // for formatting the output stream
//using namespace std;

class Student
{
private:
    // static constant members of class Student
    static const int MAX_NAME_LEN = 30;

    // class attributes
    char* name;              // allocate memory (use new) - char array MUST be zero-terminated ('\0')

public:
    // default constructor (no parameters)
    Student();

    // The Big3
    ~Student();								// destructor
    Student(const Student& copyIn);			// copy constructor
    Student& operator=(const Student& rhs);	// assignment operator

    // Additional operators required
    // *****************************
    // returns true if name is lexicographically(dictionary order)
    // less than the name of the passed Student, false otherwise
    bool operator<(const Student& rhs);

    // returns true if name is the same as the name of
    // the passed Student, false otherwise
    bool operator==(const Student& rhs);

    // returns true if name is the not the same as the name of
    // the passed Student, false otherwise(This is a one liner!)
    bool operator!=(const Student& rhs);

    // writes the name, left - justified, in a field of 30, then a space
    // To print left justified to the output stream os :
    // os << setiosflags(ios::left) << setw(MAX_NAME_LEN) << ...
    friend std::ostream& operator<<(std::ostream& out, const Student& rhs);
    // reads a one-word name from the input stream and stores it in rhs
    friend std::istream& operator>>(std::istream& in, Student& rhs);
};