#include <iostream>
#include <string.h>

// func that prints eqs in the from of ax+by=c
void PrintEq(float a, float b, float c)
{
	std::cout << a << "x + " << b << "y = " << c << std::endl;
}
 // func that prints the solution of name=value
void PrintSol(std::string name, float value)
{
	std::cout << name << " = " << value << std::endl;
}
 // the actual numbers, the float is the intial number. 
int main()
{
	float a = 2.0f;
	float b = 1.0f;
	float c = 7.0f;
	float d = 1.0f;
	float e = -1.0f;
	float f = 5.0f;

	PrintEq(a, b, c);
	PrintEq(d, e, f);

	float x = (c * e - b * f) / (e * a - b * d);
	float y = (a * f - d * b) / (e * a - b * d);
	

	PrintSol("x", x);
	PrintSol("y", y);
}