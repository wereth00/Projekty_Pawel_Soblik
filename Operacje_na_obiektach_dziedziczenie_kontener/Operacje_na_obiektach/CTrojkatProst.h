#pragma once
using namespace std;
#include "CPunkt.h"

class CTrojkatProst
{
public:
	CPunkt m_AnchorPoint;
	int m_iDlugoscA1;
	int m_iDlugoscA2;
	CTrojkatProst();
	~CTrojkatProst();
	CTrojkatProst(int x, int y, int z, int c);
	int ObwodTrojkata(int* podstawa, int* wysokosc);
	void PodajParametry(int* a, int* b, int* c, int* d);
	void Wypisz();

	friend class CKontener;
	friend int main();
};