#include <iostream>
#include "CPunkt.h"

using namespace std;

CPunkt::CPunkt()
{
	m_iX = m_iY = 0;
}
CPunkt::CPunkt(int x, int y)
{
	m_iX = x;
	m_iY = y;
}
CPunkt::~CPunkt()
{
	//cout << "\nDestruktor klasy CPunkt";
}
void CPunkt::Wpisz(int x, int y)
{
	m_iX = x;
	m_iY = y;
}
void CPunkt::wypisz()
{
	cout << "\nx = " << m_iX;
	cout << "\ny = " << m_iY;
}
int CPunkt::PodajX()
{
	return m_iX;
}

int CPunkt::PodajY()
{
	return m_iY;
}

int CPunkt::ZmienX(int x)
{
	int iX;
	iX = m_iX;
	m_iX = x;
	return iX;
}

int CPunkt::ZmienY(int y)
{
	int iY;
	iY = m_iY;
	m_iY = y;
	return iY;
}
