#include <iostream>
using namespace std;

int main()
{
	int macierz[4][3], macierzT[3][4], wektor1[10], min = 0, poz = 0, wektor2[15], i = 0, j;

	cout << "Wprowadz macierz pierwotna: " << endl;          //wprowadzanie elementow macierzy
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cin >> macierz[i][j];
		}
	}
	cout << endl << endl;
	cout << "Macierz pierwotna: " << endl;                    //wypisanie macierzy pierwotnej
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << macierz[i][j];
			cout << "\t";
		}
		cout << endl;
	}

	for (j = 0; j < 3; j++)                                 //w tym segmencie program dokonuje transpozycji macierzy
	{
		for (i = 0; i < 4; i++)
		{
			macierzT[j][i] = macierz[i][j];                 //zamieniam wiersze z kolumnami -> transpozycja
		}

	}
	cout << endl << endl;
	cout << "Macierz transponowana: " << endl;               //wypisanie macierzyT (macierzy transponowanej)
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			cout << macierzT[i][j];
			cout << "\t";
		}
		cout << endl;
	}
	cout << endl;

	cout << "Wprowadz elementy do wektora1: " << endl;         //wpisujemy elementy wektora1
	for (j = 0; j < 10; j++)
	{
		cin >> wektor1[j];
	}

	cout << "Wektor 1 wynosi:" << endl;
	for (j = 0; j < 10; j++) //drukowanie wektora1
	{
		cout << wektor1[j];
		cout << " , ";
	}

	cout << endl << endl;
	cout << "Element minimalny jest rowny: " << min << endl;
	cout << "Jego pozycja to:" << endl;

	for (i = 0; i < 15; i++)                         //drukowanie elementu minimalnego
	{
		if (wektor1[i] == min)
		{
			cout << i + 1 << " , ";
		}
	}
	cout << endl;



	cout << "Wprowadz elementy do wektora2: " << endl;
	for (i = 0; i < 15; i++) //wprowadzamy elementy wektora2
	{
		cin >> wektor2[i];
	}

	cout << "Wektor 2 wynosi: " << endl;
	for (i = 0; i < 15; i++) //wypisanie wektora2
	{
		cout << wektor2[i];
		cout << " , ";
	}

	cout << endl;
	cout << "Wprowadz wartosc szukana: " << endl;   //wprowadzamy watrosc szukana
	cin >> j;

	cout << endl << endl;

	cout << "Wartosc liczby: " << j << endl;   //drukowanie wartosci tej liczby
	cout << "Jej pozycja to: " << endl;

	for (i = 0; i < 15; i++)//drukowanie pozycji tej liczby w wektorze2
	{
		if (wektor2[i] == j)
		{
			cout << i + 1 << " ,";
		}
	}

	cout << endl << endl;

	system("pause");
	return 0;
}