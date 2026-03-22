#pragma once
#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

class macierz
{
private:
	double** tab;
	int rozmiarX;
	int rozmiarY;
public:
	macierz();
	macierz(int x, int y);
	macierz(const macierz& m);
	~macierz();

	int pobierzX() const;
	int pobierzY() const;
	void przypisujWartosc(int i, int j, double liczba);
	double pobierzWartosc(int i, int j);

	macierz operator+(const macierz& m);
	macierz operator-(const macierz& m);
	macierz operator*(const macierz& m);
	macierz& operator+=(const macierz& m);
	macierz& operator-=(const macierz& m);
	macierz& operator*=(const macierz& m);
	macierz& operator=(const macierz& m);
	bool operator==(const macierz& m);
	bool operator!=(const macierz& m);
	macierz operator*(double l);
	friend macierz operator*(double l, const macierz& m);
	friend ostream& operator<<(ostream& wyjscie, const macierz& m);

	macierz transpozycja();
	double slad();
};

//PROJEKT - ALGEBRA MACIERZY (operatory: +,-,*,+=,-=,*=,!=,==,<<,=,liczba*Macierz,Macierz*liczba,Transpozycja,Œlad (suma elementów po przek¹tnej)) i do tego wszystkie testy jednostkowe!!!