
#include <cmath>
#include <cstdlib>
#include <cerrno>
#include <iostream>
using namespace std;
class Calculator
{
public:
	enum Error
	{
		Success,
		Divide_by_Zero,
		No_Roots,
		Single_Root,
		Invalid_Parameter
	};
	double result;
	void Add(double x, double y)
	{
		result = x + y;
	}
	double Substract(double x, double y)
	{
		result = x - y;
	}
	double Multiply(double x, double y)
	{
		result = x * y;
	}
	double Divide(double x, double y)
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
	double GetResult()
	{
		return result;
	}
	double Roots(double a, double b, double c, double& x1, double& x2)
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
};

