#include "Calculator.h"

Calculator::Calculator()
{
	result = 0;
}

Calculator::~Calculator()
{

}
void Calculator::Add(double x, double y)
{
	result = x + y;
}
void Calculator::Substract(double x, double y)
{
	result = x - y;
}
void Calculator::Multiply(double x, double y)
{
	result = x * y;
}
Calculator::Error Calculator::Divide(double x, double y)
{
	if (y == 0)
	{
		return Divide_by_Zero;
	}
	else
	{
		result = x / y;
		return Success;
	}
}
double Calculator::GetResult()
{
	return result;
}
Calculator::Error Calculator::Roots(double a, double b, double c, double& x1, double& x2)
{
	double delta, pierw;
	delta = b * b - 4 * a * c;
	pierw = sqrt(delta);
	if (delta < 0)
	{
		return No_Roots;
	}
	else if (delta == 0)
	{
		if (a == 0)
		{
			return Divide_by_Zero;
		}
		else
		{
			x1 = (-b - pierw) / (2 * a);
			return Single_Root;
		}
	}
	else
	{
		if (a == 0)
		{
			return Divide_by_Zero;
		}
		else
		{
			x1 = (-b - pierw) / (2 * a);
			x2 = (-b + pierw) / (2 * a);
			return Success;
		}
	}

}