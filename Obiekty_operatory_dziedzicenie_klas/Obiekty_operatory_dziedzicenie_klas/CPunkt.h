#pragma once
using namespace std;

class CPunkt
{
private:
	int m_iX, m_iY;
public:
	CPunkt();
	CPunkt(int x, int y);
	~CPunkt();

	void Wpisz(int x, int y);
	void wypisz();
	int PodajX();
	int PodajY();
	int ZmienX(int x);
	int ZmienY(int y);

};
