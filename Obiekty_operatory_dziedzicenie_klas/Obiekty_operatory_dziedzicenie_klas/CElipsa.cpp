#include "CElipsa.h"
#include<iostream>
using namespace std;
CElipsa::CElipsa()
{
	m_iPromienX = m_iPromienY = 0;
}
CElipsa::CElipsa(int x, int y, int a, int r) :COkrag(x, y, r)
{
	m_iPromienX = a;
	m_iPromienY = r;

}
CElipsa::~CElipsa()
{

}
void CElipsa::Wpisz(int x, int y, int rx, int ry)
{
	CPunkt::Wpisz(x, y);
	m_iPromienX = rx;
	m_iPromienY = ry;
}
void CElipsa::Wypisz()
{
	cout << "Wspolrzedne srodka elipsy: ";
	CPunkt::wypisz();
	cout << endl << "Promien x elipsy: " << m_iPromienX;
	cout << endl << "Promien y elipsy: " << m_iPromienY;
}
int CElipsa::operator--()
{
	if (m_iPromienX > 4)
	{
		this->m_iPromienX--;
	}
	else
	{
		cout << "Dlugosc promienia jest za duza";
	}
	if (m_iPromienY > 4)
	{
		this->m_iPromienY--;
	}
	else
	{
		cout << "Dlugosc promienia jest za duza";
	}
	return m_iPromienX, m_iPromienY;
}
int CElipsa::operator++()
{
	if (m_iPromienX < 20)
	{
		this->m_iPromienX++;
	}
	else
	{
		cout << "Dlugosc promienia jest za duza\n";
	}
	if (m_iPromienY < 20)
	{
		this->m_iPromienY++;
	}
	else
	{
		cout << "Dlugosc promienia jest za duza\n";
	}
	return m_iPromienX, m_iPromienY;
}

