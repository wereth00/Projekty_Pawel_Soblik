#pragma once
#include"CPunkt.h"
class CLinia :public CPunkt
{
protected:
	int m_iDl;
public:
	CLinia();
	CLinia(int x, int y, int m_Dl);
	~CLinia();
	void Wpisz(int x, int y, int d);
	void Wypisz();
	int operator--();
	int operator++();
};
