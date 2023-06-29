#include "CKontener.h"
#include <iostream>
#include "CTrojkatProst.h"
#include "CPunkt.h"
using namespace std;

CKontener::CKontener()
{
	m_TabTrojkaty = new CTrojkatProst[5];
}
CKontener::~CKontener()
{
	delete[] m_TabTrojkaty;
}

void CKontener::Dodaj(CTrojkatProst* a, int x)
{
	*(m_TabTrojkaty + x) = *a;
}
void CKontener::Sprawdz(int* x, int* y)
{
	int i = 0, j = 0;

	for (i = 0; i < 5; i++)
	{
		if ((m_TabTrojkaty[i].m_AnchorPoint.PodajX() < 0) && (m_TabTrojkaty[i].m_AnchorPoint.PodajY() > 0))
		{
			x[i] = i;
			cout << i + 1 << "\nTrojkat jest w 2 cwiartce" << endl;
			j++;
		}
		else
		{
			cout << endl << i + 1 << "\nTrojkat nie jest w 2 cwiartce" << endl;

		}
	}
}

void CKontener::Wyzeruj(int z)
{
	m_TabTrojkaty[z] = *(new CTrojkatProst(0, 0, 0, 0));
}

void CKontener::Wypisz()
{
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		m_TabTrojkaty[i].Wypisz();
	}
}
