#include <iostream>

int main()
{
	/*
		This code was given as a part of a test in Marcos Pacheco's C++ course. This question confused me because I forgot we only need to mention a variable to
		use it. Besides, this matter of increment and decrement confuses me a lot because I'm not so sure on where we must care about it and where we mustn't.
	*/
	int Num1 = 10, Num2 = 20, Num3, Num4;
	
	Num3 = Num1++; // This line will set Num3 value as Num1 before increasing its value.
	Num4 = ++Num2; // This line will set Num4 value as Num2 after increasing its value.
	std::cout << "Number 1 = " << Num1 << "\n"; // Num1 value will be 11 because Num1 value changed before this line.
	std::cout << "Number 2 = " << Num2 << "\n"; // Num2 value will be 21 because Num2 value changed before this line.
	std::cout << "Number 3 = " << Num3 << "\n"; // Num3 value will be 10 because its variable Num1 was increased before the assignment.
	std::cout << "Number 4 = " << Num4 << "\n";	// Num4 value will be 21 because Num2 value changed before this line.

	system("PAUSE");
}