#include <iostream>
#include "CTrojkatProst.h"
#include "CKontener.h"
#include "CPunkt.h"
using namespace std;

int main()
{
	int a, b, c, d;
	float p1;

	cout << "Podaj a:"; cin >> a; cout << endl;
	cout << "Podaj b:"; cin >> b; cout << endl;
	cout << "Podaj c:"; cin >> c; cout << endl;
	cout << "Podaj d:"; cin >> d; cout << endl;

	CTrojkatProst* trojkat1; //obiekt 1
	trojkat1 = new CTrojkatProst(a, b, c, d);

	p1 = (*trojkat1).ObwodTrojkata(&a, &b);
	cout << "\nPole trojkata wynosi\n" << p1 << endl;
	cout << "\nTROJKAT PIERWSZY: \n" << endl;
	trojkat1->CTrojkatProst::Wypisz();

	CTrojkatProst* trojkat2, * trojkat3, * trojkat4; //obiekty
	trojkat2 = new CTrojkatProst(6, 3, -12, -7);
	trojkat3 = new CTrojkatProst(2, 9, -2, 13);
	trojkat4 = new CTrojkatProst(6, 2, -4, -10);

	cout << "\nTROJKAT DRUGI " << endl;
	trojkat2->Wypisz();

	cout << "\nTROJKAT TRZECI " << endl;
	trojkat3->Wypisz();

	cout << "\nTROJKAT CZWARTY " << endl;
	trojkat4->Wypisz();

	cout << "\nKontener" << endl;
	CKontener* kontener;

	kontener = new CKontener();
	kontener->Dodaj(trojkat1, 0);
	kontener->Dodaj(trojkat2, 1);
	kontener->Dodaj(trojkat3, 2);
	kontener->Dodaj(trojkat4, 3);

	kontener->Wypisz();

	int* x = new int[5];
	int* y = 0;
	int i = 0;

	for (i = 0; i < 5; i++)
	{
		x[i] = 1;
	}

	kontener->Sprawdz(x, y);


	for (i = 0; i < 5; i++) //zerownie
	{
		if (x[i] != 1)
		{
			kontener->Wyzeruj(x[i]);
		}
	}

	cout << endl << "\nWyzerowanie: " << endl;
	kontener->Wypisz();

	delete trojkat1; //kasowanie obiektow
	delete trojkat2;
	delete trojkat3;
	delete trojkat4;

	system("PAUSE");
	return 0;
}