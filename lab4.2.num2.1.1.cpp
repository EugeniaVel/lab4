#include <iostream>
#include <cmath>
using namespace std;
double f(double x)
{
	return 1-(1/pow(x,2));
}
int main()
{
	setlocale(LC_ALL, "Russian");
	double eps, pr;
	int n, i;
	eps = 0.000001;
	pr = f(2);
	n=3;
	i=1;
	while (i<10000)
	{
		i++;
		pr = pr*f(n);
		if (abs(f(n)-f(n-1))<eps)
		{
			break;
		}
		n++;
	}
	cout << "Произведение ряда с точностью eps=10^(-6): " << pr;
	cout << "\nКоличество итераций: " << i;
}