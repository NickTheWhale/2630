#include <iostream>
#include <iomanip>

#define DEF_SIZE 5

int main()
{
	// constant size - necessary for standard statically-allocated array definitions
	const int SIZE = 5;

	// statically-allocated variables with a variety of data types
	int		myInt;		// camelCase naming scheme:  
	float	myFloat;	//	- first word is all lowercase
	double	myDouble;	//	- every word after has an uppercase first letter and the rest lowercase

	// statically-allocated arrays
	// *NOTE: a constant size declarator can be provided by a #define, a const variable, or a hard-coded numerical literal
	//        examples for each have been provided - notice that all size declarations are equal to 5
	int		myIntArray[DEF_SIZE];
	float	myFloatArray[SIZE];
	double	myDoubleArray[5];

	// Exercises for you to complete:
	// ******************************

	// 1. (1 pt) Use cin to read in a value for myInt, myFloat, and myDouble;
	std::cin >> myInt >> myFloat >> myDouble;

	// 2. (1 pt) Use cout to print each new value to the screen
	std::cout << "myInt: " << myInt << std::endl
		<< "myFloat: " << myFloat << std::endl
		<< "myDouble: " << myDouble << std::endl;

	// 3. (2 pt) Use a for loop to read in 5 values for each of our 3 arrays: myIntArray, myFloatArray, and myDoubleArray
	for (int i = 0; i < SIZE; i++) {
		std::cin >> myIntArray[i] >> myFloatArray[i] >> myDoubleArray[i];
	}

	// 4. (3 pt) Use a for loop to print out all 5 values for each array
	// *NOTE: look at the sample output given to you in the Lab 1 handout - your formatting must match exactly
	// *HINT: at the top of this file, notice line 2: "#include <iomanip>" 
	//        functionality provided by the "iomanip" header file will allow you to accomplish this exercise
	// * The first line is given to you - it formats the output stream to display numbers in fixed-point notation
	// * and display floating-point values with 2 digits of precision to the right of the decimal point
	constexpr auto SPACE16 = "                ";
	constexpr auto SPACE3 = "   ";
	constexpr auto SPACE4 = "    ";
	constexpr auto SPACE = " ";
	std::cout << std::fixed << std::setprecision(2);
	std::cout << SPACE4 << SPACE4 << SPACE << SPACE << "myIntArray";
	std::cout << SPACE4 << SPACE4 << "myFloatArray";
	std::cout << SPACE4 << SPACE3 << "myDoubleArray" << std::endl;
	for (int i = 0; i < SIZE; i++) {
		std::cout << SPACE16 << SPACE3 << myIntArray[i]
			<< SPACE16 << myFloatArray[i]
			<< SPACE16 << myDoubleArray[i]
			<< std::endl;
	}
	std::cout << "The size of myInt: " << sizeof(myInt) << " bytes" << std::endl;
	std::cout << "The size of myFloat: " << sizeof(myFloat) << " bytes" << std::endl;
	std::cout << "The size of myDouble: " << sizeof(myDouble) << " bytes" << std::endl;
	std::cout << "The size of myIntArray: " << sizeof(myIntArray) << " bytes" << std::endl;
	std::cout << "The size of myFloatArray: " << sizeof(myFloatArray) << " bytes" << std::endl;
	std::cout << "The size of myDoubleArray: " << sizeof(myDoubleArray) << " bytes" << std::endl;



	// 5. (3 pt) Print out the size in bytes of each variable used in the exercises: myInt, myFloat, myDouble, myIntArray, myFloatArray, and myDoubleArray
	// *NOTE: you may NOT print out a literal value for the number of bytes (for example: cout << 4; or cout << "4";)
	//        you must use the C++ language to determine the size of each variable

	return 0;
}