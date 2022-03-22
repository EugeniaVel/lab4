#include <iostream>
#include <cmath>
using namespace std;
double f(double x, double y)
{
	return pow(x+8,y)/((y+1)*pow(6,y));
}
int main()
{
	setlocale(LC_ALL, "Russian");
	double x, eps, S;
	int n, i;
	cout << "Введите x из интервала (-14;-2): ";
	cin >> x;
	eps = 0.000001;
	S = f(x,0);
	n=1;
	i=1;
	while (i<10000)
	{
		i++;
		S = S+f(x,n);
		if (abs(f(x,n)-f(x,n-1))<eps)
		{
			break;
		}
		n++;
	}
	cout << "Сумма ряда с точностью eps=10^(-6): " << S;
	cout << "\nКоличество итераций: " << i;
}