#include "COkrag.h"
#include <iostream>
using namespace std;
COkrag::COkrag()
	:CPunkt()
{
	m_ipromien = 0;
}
COkrag::COkrag(int x, int y, int r)
	: CPunkt(x, y)
{
	m_ipromien = r;
}
COkrag::~COkrag()
{
	//destruktor
}
void COkrag::Wpisz(int x, int y, int r)
{
	CPunkt::Wpisz(x, y);
	m_ipromien = r;
}
void COkrag::Wypisz()
{
	CPunkt::wypisz();
	cout << "\nPromien\n = " << m_ipromien << endl;
}
void COkrag::PrzesunDo(int x, int y)
{
	CPunkt::ZmienX(x);
	CPunkt::ZmienY(y);
}
int COkrag::operator--()
{
	if (m_ipromien > 4)
	{
		this->m_ipromien--;
	}
	else
	{
		cout << "Promien jest za krotki by wykonac ta operacje\n";
	}
	return m_ipromien;
}
int COkrag::operator++()
{
	if (m_ipromien < 20)
	{
		this->m_ipromien++;
	}
	else
	{
		cout << "Promien jest za dlugi by wykonac ta operacje\n";
	}
	return m_ipromien;
}
