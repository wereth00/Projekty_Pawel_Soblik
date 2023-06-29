#pragma once
using namespace std;

class CPunkt
{
private:
	int m_iX;
	int m_iY;
public:
	CPunkt();
	CPunkt(int x, int y);
	~CPunkt();

	void wypisz();
	int PodajX();
	int PodajY();
	double ZmienX(int x);
	double ZmienY(int y);

};

