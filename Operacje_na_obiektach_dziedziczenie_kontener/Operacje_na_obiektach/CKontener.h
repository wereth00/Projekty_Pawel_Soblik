#pragma once
#include "CTrojkatProst.h"

class CKontener
{
private:
	CTrojkatProst* m_TabTrojkaty;
public:
	CKontener();
	~CKontener();
	void Dodaj(CTrojkatProst* a, int x);
	void Sprawdz(int* x, int* y);
	void Wyzeruj(int z);
	void Wypisz();
};
