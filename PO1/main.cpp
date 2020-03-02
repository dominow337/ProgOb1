#include "Calculator.h" 

int main()
{
	Calculator calc;
	calc.Add(1, 2);
	double res = calc.GetResult();
	cout << res<<endl;
	if (calc.Divide(2, 5) == Calculator::Error::Success)
	{
		res = calc.GetResult();
		cout << res<<endl;
	}
	return 0;
}