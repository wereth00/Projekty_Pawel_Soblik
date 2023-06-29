#include "CLinia.h"
#include <iostream>
#include"CPunkt.h"
#include<math.h>
using namespace std;

CLinia::CLinia()
{
	m_iDl = 0;
}
CLinia::CLinia(int x, int y, int d) :CPunkt(x, y)
{
	m_iDl = d;
}
CLinia::~CLinia()
{

}
void CLinia::Wpisz(int x, int y, int d)
{
	CPunkt::Wpisz(x, y);
	m_iDl = d;
}
void CLinia::Wypisz()
{
	cout << "\nWspolrzedne poczatku lini: ";
	CPunkt::wypisz();
	cout << "\nDlugosc lini: " << m_iDl;
}
int CLinia::operator--()
{
	if (m_iDl > 4)
	{
		this->m_iDl--;
	}
	else
	{
		cout << "Za mala dlugosc aby wykonac te operacje";
	}
	return m_iDl;
}
int CLinia::operator++()
{
	if (m_iDl < 20)
	{
		this->m_iDl++;
	}
	else
	{
		cout << "Za duza dlugosc aby wykonac te operacje";
	}
	return m_iDl;
}