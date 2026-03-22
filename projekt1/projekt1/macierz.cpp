#include<iostream>
#include<exception>
#include"macierz.h"

using namespace std;

macierz::macierz()
{
	tab = 0;
	rozmiarX = 0;
	rozmiarY = 0;
}

macierz::macierz(int x, int y)
{
	if (x < 0 || y < 0)
	{
		rozmiarX = 1;
		rozmiarY = 1;
	}
	else
	{
		rozmiarX = x;
		rozmiarY = y;
	}

	tab = new double* [rozmiarX];
	for (int i = 0; i < rozmiarX; i++)
	{
		tab[i] = new double[rozmiarY];
		for (int j = 0; j < rozmiarY; j++)
		{
			tab[i][j] = 0;
		}
	}
}

macierz::~macierz()
{
	for (int i = 0; i < rozmiarX; i++)
	{
		delete[] tab[i];
	}
	delete[] tab;
}

macierz::macierz(const macierz& m)
{
	rozmiarX = m.rozmiarX;
	rozmiarY = m.rozmiarY;

	tab = new double* [rozmiarX];
	for (int i = 0; i < rozmiarX; i++)
	{
		tab[i] = new double[rozmiarY];
		for (int j = 0; j < rozmiarY; j++)
		{
			tab[i][j] = m.tab[i][j];
		}
	}
}

int macierz::pobierzX() const
{
	return this->rozmiarX;
}

int macierz::pobierzY() const
{
	return this->rozmiarY;
}

void macierz::przypisujWartosc(int i, int j, double liczba)
{
	this->tab[i][j] = liczba;
}

double macierz::pobierzWartosc(int i, int j)
{
	return this->tab[i][j];
}

macierz macierz::operator+(const macierz& m)
{
	if (this->rozmiarX != m.rozmiarX || this->rozmiarY != m.rozmiarY)
	{
		throw invalid_argument("Dodawanie macierzy wymaga dwoch macierzy tego samego rozmiaru");
	}
	
	if (this->rozmiarX > 2 || this->rozmiarY > 2 || m.rozmiarX > 2 || m.rozmiarY > 2)
	{
		throw out_of_range("Rozmiar macierzy ma byc nie wiekszy niz 2");
	}

	macierz wynikowa(this->rozmiarX, this->rozmiarY);
	for (int i = 0; i < this->rozmiarX; i++)
	{
		for (int j = 0; j < this->rozmiarY; j++)
		{
			wynikowa.tab[i][j] = this->tab[i][j] + m.tab[i][j];
		}
	}

	return wynikowa;
}

macierz macierz::operator-(const macierz& m)
{
	if (this->rozmiarX != m.rozmiarX || this->rozmiarY != m.rozmiarY)
	{
		throw invalid_argument("Odejmowanie macierzy wymaga dwoch macierzy tego samego rozmiaru");
	}
	
	if (this->rozmiarX > 2 || this->rozmiarY > 2 || m.rozmiarX > 2 || m.rozmiarY > 2)
	{
		throw out_of_range("Rozmiar macierzy ma byc nie wiekszy niz 2");
	}

	macierz wynikowa(this->rozmiarX, this->rozmiarY);
	for (int i = 0; i < this->rozmiarX; i++)
	{
		for (int j = 0; j < this->rozmiarY; j++)
		{
			wynikowa.tab[i][j] = this->tab[i][j] - m.tab[i][j];
		}
	}

	return wynikowa;
}

macierz macierz::operator*(const macierz& m)
{
	if (this->rozmiarX != m.rozmiarY)
	{
		throw invalid_argument("Liczba kolumn pierwszej macierzy musi byc rowna liczbie wierszy drugiej macierzy");
	}
	
	if (this->rozmiarX > 2 || this->rozmiarY > 2 || m.rozmiarX > 2 || m.rozmiarY > 2)
	{
		throw out_of_range("Rozmiar wielomianow ma byc nie wiekszy niz 2");
	}

	macierz wynikowa(this->rozmiarX, m.rozmiarY);
	for (int i = 0; i < this->rozmiarX; i++)
	{
		for (int j = 0; j < m.rozmiarY; j++)
		{
			for (int l = 0; l < this->rozmiarY; l++)
			{
				wynikowa.tab[i][j] += this->tab[i][l] * m.tab[l][j];
			}
		}
	}

	return wynikowa;
}

macierz& macierz::operator=(const macierz& m)
{

	this->rozmiarX = m.rozmiarX;
	this->rozmiarY = m.rozmiarY;

	for (int i = 0; i < this->rozmiarX; i++)
	{
		for (int j = 0; j < this->rozmiarY; j++)
		{
			this->tab[i][j] = m.tab[i][j];
		}
	}

	return *this;
}

macierz& macierz::operator*=(const macierz& m)
{
	*this = *this * m;
	return *this;
}

macierz& macierz::operator+=(const macierz& m)
{
	*this = *this + m;
	return *this;
}

macierz& macierz::operator-=(const macierz& m)
{
	*this = *this - m;
	return *this;
}

bool macierz::operator==(const macierz& m)
{
	if (this->rozmiarX != m.rozmiarX || this->rozmiarY != m.rozmiarY)
	{
		return false;
	}

	for (int i = 0; i < this->rozmiarX; i++)
	{
		for (int j = 0; j < this->rozmiarY; j++)
		{
			if (this->tab[i][j] != m.tab[i][j])
			{
				return false;
			}
		}
	}

	return true;
}

bool macierz::operator!=(const macierz& m)
{
	return !(*this == m);
}

macierz operator*(double l, const macierz& m)
{
	macierz wynikowa(m.rozmiarX, m.rozmiarY);

	for (int i = 0; i < m.rozmiarX; i++)
	{
		for (int j = 0; j < m.rozmiarY; j++)
		{
			wynikowa.tab[i][j] = m.tab[i][j] * l;
		}
	}

	return wynikowa;
}

macierz macierz::operator*(double l)
{
	macierz wynikowa(this->rozmiarX, this->rozmiarY);

	for (int i = 0; i < this->rozmiarX; i++)
	{
		for (int j = 0; j < this->rozmiarY; j++)
		{
			wynikowa.tab[i][j] = this->tab[i][j] * l;
		}
	}

	return wynikowa;
}


ostream& operator<<(ostream& wyjscie, const macierz& m)
{
	for (int i = 0; i < m.rozmiarX; i++)
	{
		wyjscie << "[";
		for (int j = 0; j < m.rozmiarY; j++)
		{
			wyjscie << "\t" << m.tab[i][j];
		}
		wyjscie << "\t]\n";
	}

	return wyjscie;
}

macierz macierz::transpozycja()
{
	macierz transponowana(this->rozmiarY, this->rozmiarX);

	for (int i = 0; i < this->rozmiarX; i++)
	{
		for (int j = 0; j < this->rozmiarY; j++)
		{
			transponowana.tab[j][i] = this->tab[i][j];
		}
	}

	return transponowana;
}


double macierz::slad()
{
	if (this->rozmiarX != this->rozmiarY)
	{
		throw invalid_argument("Slad mozna policzyc tylko z macierzy kwadratowej");
	}

	if (this->rozmiarX > 2 || this->rozmiarY > 2)
	{
		throw out_of_range("Rozmiar wielomianow ma byc nie wiekszy niz 2");
	}

	double wynik = 0;

	for (int i = 0; i < this->rozmiarX; i++)
	{
		wynik += this->tab[i][i];
	}

	return wynik;
}