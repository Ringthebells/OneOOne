#include<iostream>
#include<locale.h>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Polish");
	int a;
	int b;
	cout << "Podaj szerokość prostokąta ";
	cin >> a;
	cout << "Podaj wysokość prostokąta ";
	cin >> b;
	if ((a < 2) || (b < 2))
	{
		cout << "Podano złe wartości boków (minimalna wartość boku rówana 2)";
	}
	else
	{
		for (int i = a; i >= 1; i--)
		{
			cout << "x";
		}
		cout << endl;
		for (int i = b - 2; i >= 1; i--)
		{
			cout << "x";
			for (int i = a - 2; i >= 1; i--)
			{
				cout << " ";
			}
			cout << "x";
			cout << endl;
		}
		for (int i = a; i >= 1; i--)
		{
			cout << "x";
		}
		cout << endl << "Dziękuję za uwagę";
	}
	return 0;
}