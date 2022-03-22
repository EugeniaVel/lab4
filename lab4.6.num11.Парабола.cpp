#include <iostream>
#include <cmath>
using namespace std;
double I(int i, double S, double x, double h, int n)
{
	while (i<n)
	{
		if (i%2==0)
		{
			S=S+2*abs(x/pow(x+1,3));
		}
		else
		{
			S=S+4*abs(x/pow(x+1,3));
		}
		x=x+h;
		i++;
	}
	S=S+abs(n*h/pow(n*h+1,3));
	S=S*h/3;
	return S;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	double eps,h,n1,n2,a,b,i1,i2;
	a=0;
	cout<<"¬ведите b: ";
	cin>>b;
	eps=0.000001;
	cout<<"¬ведите n: ";
	cin>>n1;
	h=(b-a)/n1;
	do
	{
		n2=n1*2;
		i1=I(1,0,a+h,h,n1);
		i2=I(1,0,a+h,h,n2);
		n1=n2;
	}
	while (abs(i2-i1)>=eps);
	cout<<"«начение несобственного интеграла по методу парабол: "<<i1;
}