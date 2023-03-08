//--------------------------------------------------------------------------
// Name:    Dr. Patrick Byrnes
// Project: Maintain and compare a list of student names
// Purpose: Practice with dynamic memory allocation and operator overloading
//--------------------------------------------------------------------------

#include <iostream>
#include "Student.hpp"

int main()
{
    // how many names are in the input stream?
    int num_names;
    std::cin >> num_names;	// ALL names MUST contain NO spaces, otherwise we would need to use getline()

    // quick output
    std::cout << "Reading " << num_names << " names from the input stream ..." << std::endl;

    // Create a dynamically allocated array to hold the students
    // note that the Student objects inside the array are NOT dynamically allocated, just the array!
    Student* pStudents = new Student[num_names];

    // Read in all students
    for (int i = 0; i < num_names; i++)
    {
        std::cin >> pStudents[i];
    }

    // Output all names
    for (int i = 0; i < num_names; i++)
    {
        std::cout << pStudents[i] << std::endl;
    }
    std::cout << std::endl;

    // Compare every name to every other name using all overloaded relation operators
    // first - use less than
    for (int i = 0; i < num_names - 1; i++)
    {
        for (int j = i + 1; j < num_names; j++)
        {
            if (pStudents[i] < pStudents[j])
                std::cout << pStudents[i] << " is less than " << pStudents[j] << std::endl;
        }
    }
    // next - use is equal to
    for (int i = 0; i < num_names - 1; i++)
    {
        for (int j = i + 1; j < num_names; j++)
        {
            if (pStudents[i] == pStudents[j])
                std::cout << pStudents[i] << " is equal to " << pStudents[j] << std::endl;
        }
    }
    // next use is not equal to
    for (int i = 0; i < num_names - 1; i++)
    {
        for (int j = i + 1; j < num_names; j++)
        {
            if (pStudents[i] != pStudents[j])
                std::cout << pStudents[i] << " is NOT equal to " << pStudents[j] << std::endl;
        }
    }

    // let's test the assignment operator (must be >= 2 names in list)
    std::cout << "Testing assignment operator, set first name equal to second name:\n";
    pStudents[0] = pStudents[1];
    if (pStudents[0] == pStudents[1])
        std::cout << pStudents[0] << " is equal to " << pStudents[1] << std::endl;

    // finally, let's test the copy constructor
    std::cout << "Testing copy constructor, set new Student object equal to second name in list:\n";
    Student testStudent(pStudents[1]);
    if (testStudent == pStudents[1])
        std::cout << testStudent << " is equal to " << pStudents[1] << std::endl;

    // clean up our dynamically allocated memory
    delete[] pStudents;
    pStudents = nullptr; // not necessary since this is the end of the program, but good habit to have :)

    return 0;
}
