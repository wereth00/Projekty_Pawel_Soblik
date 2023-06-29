
#include "CTrojkatProst.h"
#include <iostream>

CTrojkatProst::CTrojkatProst()
{
	m_iDlugoscA1 = m_iDlugoscA2 = 1;
	CPunkt m_AnchorPoint = CPunkt(0, 0);
}

CTrojkatProst::~CTrojkatProst()
{
}

CTrojkatProst::CTrojkatProst(int x, int y, int z, int c)
{
	m_iDlugoscA1 = x;
	m_iDlugoscA2 = y;
	m_AnchorPoint = CPunkt(z, c);
}

void CTrojkatProst::PodajParametry(int* a, int* b, int* c, int* d)
{
	*a = m_AnchorPoint.PodajX();
	*b = m_AnchorPoint.PodajY();
	*c = m_iDlugoscA1;
	*d = m_iDlugoscA2;
}

int CTrojkatProst::ObwodTrojkata(int* podstawa, int* wysokosc)
{
	int pole;

	pole = ((*podstawa) * (*wysokosc) / 2);

	return pole;
}

void CTrojkatProst::Wypisz()
{
	m_AnchorPoint.CPunkt::wypisz();
	cout << "\nWartosc pierwszej przyprostokatnej to: " << m_iDlugoscA1 << endl;
	cout << "\nWartosc drugiej przyprostokatnej to: " << m_iDlugoscA2 << endl;
}
