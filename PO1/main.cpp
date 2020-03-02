#include "Calculator.h" 

int main()
{
	Calculator calc;
	int j;
	double x, y, a, b, c, x1, x2;
	cout << "Co chcesz zrobic?\n 1-Add\n 2-Substract\n 3-Multiply\n 4-Divide\n 5-Roots\n";
	cin >> j;
	if (j == 1)
	{
		cout << "Podaj liczby, ktore chcesz dodac:\n";
		cin >> x >> y;
		calc.Add(x, y);
	}
	if (j == 2)
	{
		cout << "Podaj liczby, ktore chcesz odjac:\n";
		cin >> x >> y;
		calc.Substract(x, y);
	}
	if (j == 3)
	{
		cout << "Podaj liczby do przemnozenia:\n";
		cin >> x >> y;
		calc.Multiply(x, y);
	}
	if (j == 4)
	{
		cout << "Podaj dzielna:\n";
		cin >> x;
		cout << "Podaj dzielnik:\n";
		cin >> y;
		calc.Divide(x, y);
	}
	if (j == 5)
	{
		cout << "Podaj wartosc przy x^2:\n";
		cin >> a;
		cout << "Podaj wartosc przy x:\n";
		cin >> b;
		cout << "Podaj wartosc wyrazu wolnego:\n";
		cin >> c;
		calc.Roots(a, b, c, x1, x2);
		if (calc.Roots(a, b, c, x1, x2) == Calculator::Error::Success)
		{
			cout << "Pierwiastki:\n" << x1 << x2;
		}
		else if (calc.Roots(a, b, c, x1, x2) == Calculator::Error::Single_Root)
		{
			cout << "Pierwiastek:\n" << x1;
		}
	}
	if (j > 0 && j < 5)
	{
		double res;
		res = calc.GetResult();
		cout << "Wynik to:\n" << res;
	}
	/*calc.Add(1, 2);
	double res = calc.GetResult();
	//cout << res<<endl;
	if (calc.Divide(2, 5) == Calculator::Error::Success)
	{
		res = calc.GetResult();
		//cout << res<<endl;
	}*/
	return 0;
}