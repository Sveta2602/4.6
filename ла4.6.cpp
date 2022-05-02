// Лаб 4.6.cpp
// < Яшиної Світлани >
// Лабораторна робота № 4.6
// Варіант 24

#include <iostream>;
#include <cmath>;
  
using namespace std;
int main()
{
	double  S, P1, P2;
	int i, n;
	S = 0;
	n = 1;
	while (n <= 10)
	{
		P1 = 1;
		i = 1;
		while (i <= n)

		{
			P1 *= i * i;
			i++;

		}
		P2 = 1;
		i = n;
		while (i <= 10)
		{
			P2 *= i * i;
			i++;
		}
		S += (P1 + P2) / n;
		n++;

	}
	cout << S << endl;


	S = 0;
	n = 1;
	do {
		P1 = 1;
		i = 1;
		do {
			P1 *= i * i;
			i++;
		} while (i <= n);
		P2 = 1;
		i = n;
		do {
			P2 *= i * i;
			i++;
		} while (i <= 10);

		S += (P1 + P2) / n;
		n++;
	} while (n <= 10);
	cout << S << endl;

	S = 0;
	for (n = 1; n <= 10; n++)
	{
		P1 = 1;
		for (i = 1; i <= n; i++)
		{
			P1 *= i * i;
		}
		P2 = 1;
		for (i = n; i <= 10; i++)
		{
			P2 *= i * i;
		}
		S += (P1 + P2) / n;
	}
	cout << S << endl;
	S = 0;
	for (n = 10; n >= 1; n--)
	{
		P1 = 1;
		for (i = n; i >= 1; i--)
		{
			P1 *= i * i;
		}
		P2 = 1;
		for (i = 10; i >= n; i--)
		{
			P2 *= i * i;
		}
		S += (P1 + P2) / n;
	}
	 cout << S << endl;
	return 0;


}