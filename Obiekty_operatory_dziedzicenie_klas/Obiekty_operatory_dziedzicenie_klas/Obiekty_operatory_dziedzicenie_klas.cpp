#include <iostream>
#include "CPunkt.h"
#include"COkrag.h"
#include"CElipsa.h"
#include"CLinia.h"
using namespace std;

int sprawdz()
{
	int z;
	do
	{
		cin >> z;
		if (z < 0)
		{
			cout << "Dlugosc promienia musi byc liczba dodatnia";
		}
	} while (z < 0);
	return z;
}

int main()
{
	int a;
	do
	{
		cout << endl << "Menu:\n" << endl;
		cout << "Wybierz obiekt" << endl;
		cout << "1.Okrag" << endl;
		cout << "2.Linia" << endl;
		cout << "3.Elipsa" << endl;
		cout << "Reszta - wartosc nieprawidlowa. Wyjscie." << endl;
		cin >> a;
		if (a == 1)
		{
			int b, z, x, c;

			cout << "\nWybrales Okrag: \n" << endl;

			cout << endl << "\nPodaj wspolrzedna x srodka okregu: \n";
			cin >> z;
			cout << "\nPodaj wspolrzedna y srodka okregu: \n";
			cin >> x;
			cout << "\nPodaj promien okregu: \n";
			c = sprawdz();
			COkrag* ok1 = new COkrag(z, x, c);
			ok1->Wpisz(z, x, c);
			ok1->Wypisz();
			do
			{
				cout << "Wprowadz '1' jesli chcesz z zwiekszyc promien: \n" << endl;
				cout << "Wprowadz '2' jesli chcesz z zmniejszyc promien: \n" << endl;
				cout << "Wprowadz '3' jesli chcesz przesunac srodek okregu: \n" << endl;
				cout << "Reszta - powrot do menu." << endl;
				cin >> b;
				if (b == 3)
				{
					int x, y;

					cout << "Podaj nowe x: \n" << endl;
					cin >> x;
					cout << "Podaj nowe y: \n" << endl;
					cin >> y;

					ok1->PrzesunDo(x, y);
					ok1->Wypisz();
					//cout << endl << "zmiana srodka";
				}
				else if (b == 2)
				{
					ok1->operator--();
					ok1->Wypisz();
					//cout << endl << "promien--";
				}
				else if (b == 1)
				{
					ok1->operator++();
					ok1->Wypisz();
					//cout << endl << "promien++";
				}
				else
				{
					cout << endl << "Niepoprawna wartosc.";
				}
			} while (b == 1 || b == 2 || b == 3);
		}
		else if (a == 2)
		{
			int c, y, x, d;

			cout << "Wybrales Linie: " << endl;

			cout << endl << "Podaj wspolrzedna x poczatku lini:";
			cin >> x;
			cout << "Podaj wspolrzedna y poczatku lini:";
			cin >> y;
			cout << "Podaj dlugosc linii: ";
			cin >> d;
			CLinia* li1 = new CLinia(x, y, d);
			li1->Wpisz(x, y, d);
			li1->Wypisz();
			do
			{
				cout << "\nWprowadz '1' jesli chcesz z zwiekszyc dlugosc: " << endl;
				cout << "\nWprowadz '2' jesli chcesz z zmniejszyc dlugosc: " << endl;
				cout << "Reszta - powrot do menu." << endl;
				cin >> c;
				if (c == 2)
				{
					li1->operator--();
					li1->Wypisz();
					//cout << endl << "promien--";
				}
				else if (c == 1)
				{
					li1->operator++();
					li1->Wypisz();
					//cout << endl << "promien++";
				}
				else
				{
					cout << endl << "Niepoprawna wartosc.";
				}
			} while (c == 1 || c == 2);
		}
		else if (a == 3)
		{
			int d, x, y, f;

			cout << "Wybrales Elipse: " << endl;

			cout << endl << "\nPodaj wspolrzedna x poczatku elipsy: ";
			cin >> x;
			cout << "\nPodaj wspolrzedna y poczatku elipsy:";
			cin >> y;
			cout << "\nPodaj promien elipsy: ";
			cin >> d;
			cout << "\nPodaj drugi promien elipsy: ";
			cin >> f;

			CElipsa* eli1 = new CElipsa(x, y, d, f);
			eli1->Wpisz(x, y, d, f);
			eli1->Wypisz();
			do
			{
				cout << "\nWprowadz '1' jesli chcesz z zwiekszyc dlugosc promienia: \n" << endl;
				cout << "\nWprowadz '2' jesli chcesz z zmniejszyc dlugosc promienia: \n" << endl;
				cout << "Reszta - powrot do menu." << endl;
				cin >> d;
				if (d == 2)
				{
					eli1->operator--();
					eli1->Wypisz();
					//cout << endl << "promien--";
				}
				else if (d == 1)
				{
					eli1->operator++();
					eli1->Wypisz();
					//cout << endl << "promien++";
				}
				else
				{
					cout << endl << "Niepoprawna wartosc.";
				}
			} while (d == 1 || d == 2);
		}
		else
		{
			cout << "Niepoprawna wartosc" << endl;
		}

	} while (a == 1 || a == 2 || a == 3);
	system("PAUSE");
}