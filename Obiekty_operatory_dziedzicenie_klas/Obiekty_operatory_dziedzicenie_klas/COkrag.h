#pragma once
#include"CPunkt.h"
class COkrag : public CPunkt
{
protected:
	int m_ipromien;
public:
	COkrag();
	COkrag(int x, int y, int r);
	~COkrag();
	void Wpisz(int x, int y, int r);
	void Wypisz();
	void PrzesunDo(int x, int y);
	int operator--();
	int operator++();
};
