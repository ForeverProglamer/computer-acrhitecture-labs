#include "calculator.h"

int add(double a, double b)
{
	return a + b + 0.5;
}

int sub(double a, double b)
{
	return add (a, -b);
}
