
#include <cmath>
#include <cstdlib>
#include <cerrno>
#include <iostream>
using namespace std;
class Calculator
{
private:
	double result;
public:
	Calculator();
	~Calculator();
	enum Error
	{
		Success,
		Divide_by_Zero,
		No_Roots,
		Single_Root,
		Invalid_Parameter
	};
	void Add(const double x, const double y);
	void Substract(const double x, const double y);
	void Multiply(const double x, const double y);
	Error Divide(const double x, const double y);
	double GetResult();
	Error Roots(double a, double b, double c, double& x1, double& x2);
};

