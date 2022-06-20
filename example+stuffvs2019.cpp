#include <iostream> // includes the premade code from the specified library

int main() //main function, int means interger, functions should end with ()
{ // function body
	std::cout << "Hello World!\n"; //cout means character output, in this case the characters outputted are "Hello World", \n is a formatting tag symbolizing a new line
	int width; // this is a variable, varbiables need to be declared and initinalized (given a value)
	width = 5; // variable assignment
	std::cout << width; // this code outputs the value of "width"
	//int x = 24;// you can also assign values these ways
	//int y(86);
	//int z{ 11 };// this is the best way of assigning values.
	int u{};//temporary value, provides a 0 result.
	int x{ 24 }, y{ 86 }, z{ 11 };// this is a way of assigning values to multiple variables.
	std::cout << x << std::endl;// the	std::endl tells the computer to end the line, any commands that will be outputted to the console after this line will start on a new one.
	std::cout << z;
	std::cout << y;
	std::cout << "\n" << u;//however the \n is better to used as endl is rarely used/needed. If a new line is needed then use the \n command in the line before or in front of the actuall data you are trying to output. ex. std::cout << "\n" << "message"/variable;
	/*Multiline
	comments can be made with the symbols on line 9 and 10*/
	std::cout << "Enter a number:";//the << is the insertion operator, the insertion operator is used to insert stuff (best guess)
	int input1{};//temporary varibale assignment, this will be replaced when using the cin command.
	std::cin >> input1;// in the cases where an input is asked for the operator will be an extraction operator >>, this operator is used for extracting input and storing it
	std::cout << "You entered:" << input1;
	return 0; // returns to the computer zero, it's a valuable tool you can use when debugging
}