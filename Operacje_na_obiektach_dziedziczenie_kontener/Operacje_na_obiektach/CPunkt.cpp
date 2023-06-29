#include "CPunkt.h"
#include <iostream>
using namespace std;

CPunkt::CPunkt()
{
	m_iX = 0.0;
	m_iY = 0.0;
}
CPunkt::CPunkt(int x, int y)
{
	m_iX = x;
	m_iY = y;
}
CPunkt::~CPunkt() //destruktor
{
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

double CPunkt::ZmienX(int x)
{
	double iX;
	iX = m_iX;
	m_iX = x;
	return iX;
}

double CPunkt::ZmienY(int y)
{
	double iY;
	iY = m_iY;
	m_iY = y;
	return iY;
}
