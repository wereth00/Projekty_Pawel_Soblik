#pragma once
#include"COkrag.h"
class CElipsa :public COkrag
{
protected:
	int m_iPromienX, m_iPromienY;
public:
	CElipsa();
	CElipsa(int x, int y, int m_iPromienX, int m_iPromienY);
	~CElipsa();
	void Wpisz(int x, int y, int rx, int ry);
	void Wypisz();
	int operator--();
	int operator++();
};
