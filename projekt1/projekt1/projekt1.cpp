#include<iostream>
#include"macierz.h"

using namespace std;

int main()
{
    /*
    double liczba = 0;
    macierz m1(2, 2);
    macierz m2(2, 2);
    for (int i = 0; i < m1.pobierzX(); i++)
    {
        for (int j = 0; j < m1.pobierzY(); j++)
        {
            cout << "Podaj liczbe dla wspolrzednej macierzy " << i << "," << j << ": ";
            cin >> liczba;
            m1.przypisujWartosc(i, j, liczba);
        }
    }

    for (int i = 0; i < m2.pobierzX(); i++)
    {
        for (int j = 0; j < m2.pobierzY(); j++)
        {
            cout << "Podaj liczbe dla wspolrzednej macierzy " << i << "," << j << ": ";
            cin >> liczba;
            m2.przypisujWartosc(i, j, liczba);
        }
    }

    cout << "Macierz m1:" << endl;
    cout << m1;
    cout << "Macierz m2:" << endl;
    cout << m2;

    macierz wynikowa = m1 + m2;
    cout << "Macierz wynikowa:" << endl;
    cout << wynikowa;
    */

    /*
    double liczba = 0;
    macierz do_trans(1, 2);

    for (int i = 0; i < do_trans.pobierzX(); i++)
    {
        for (int j = 0; j < do_trans.pobierzY(); j++)
        {
            cout << "Podaj liczbe dla wspolrzednej macierzy " << i << "," << j << ": ";
            cin >> liczba;
            do_trans.przypisujWartosc(i, j, liczba);
        }
    }

    macierz po_trans = do_trans.transpozycja();
    cout << po_trans;
    */

    /*
    double liczba = 0;
    double wynikowy_slad = 0;
    macierz do_spraw(1, 2);
    macierz do_mno(2,2);
    bool rezultat;
    bool rezultat2;
    bool rezultat3;

    for (int i = 0; i < do_mno.pobierzX(); i++)
    {
        for (int j = 0; j < do_mno.pobierzY(); j++)
        {
            cout << "Podaj liczbe dla wspolrzednej macierzy " << i << "," << j << ": ";
            cin >> liczba;
            do_mno.przypisujWartosc(i, j, liczba);
        }
    }

    for (int i = 0; i < do_spraw.pobierzX(); i++)
    {
        for (int j = 0; j < do_spraw.pobierzY(); j++)
        {
            cout << "Podaj liczbe dla wspolrzednej macierzy " << i << "," << j << ": ";
            cin >> liczba;
            do_spraw.przypisujWartosc(i, j, liczba);

        }
    }

    macierz po_mno = 5.0 * do_mno;
    macierz po_mno2 = do_mno * 6.0;
    wynikowy_slad = po_mno2.slad();
    rezultat = (po_mno != do_spraw);
    rezultat2 = (po_mno == po_mno2);
    rezultat3 = (po_mno == do_spraw);
    cout << po_mno << endl;
    cout << po_mno2 << endl;
    cout << wynikowy_slad << endl;
    cout << rezultat << endl;
    cout << rezultat2 << endl;
    cout << rezultat3 << endl;
    */

    double liczba = 0;
    macierz m1(2, 2);
    macierz m2(2, 2);
    macierz m3(2, 2);

    for (int i = 0; i < m1.pobierzX(); i++)
    {
        for (int j = 0; j < m1.pobierzY(); j++)
        {
            std::cout << "Podaj liczbe dla wspolrzednej macierzy " << i << "," << j << ": ";
            cin >> liczba;
            m1.przypisujWartosc(i, j, liczba);
        }
    }

    for (int i = 0; i < m2.pobierzX(); i++)
    {
        for (int j = 0; j < m2.pobierzY(); j++)
        {
            std::cout << "Podaj liczbe dla wspolrzednej macierzy " << i << "," << j << ": ";
            cin >> liczba;
            m2.przypisujWartosc(i, j, liczba);
        }
    }

    for (int i = 0; i < m3.pobierzX(); i++)
    {
        for (int j = 0; j < m3.pobierzY(); j++)
        {
            std::cout << "Podaj liczbe dla wspolrzednej macierzy " << i << "," << j << ": ";
            cin >> liczba;
            m3.przypisujWartosc(i, j, liczba);
        }
    }

    macierz wynikowa = (m1 - m2);
    macierz wynikowa2 = (m1 + m2);
    macierz wynikowa3 = (m1 * m2);
    macierz wynikowa4 = m1;
    wynikowa4 *= m2;
    std::cout << wynikowa << endl;
    std::cout << wynikowa2 << endl;
    std::cout << wynikowa3 << endl;
    
    std::cout << m1 << endl;
    std::cout << m2 << endl;
    std::cout << wynikowa4 << endl;

    try
    {
        double result = m3.slad();
        std::cout << "Slad: " << result << endl;
    }
    catch (const invalid_argument& e)
    {
        cerr << "Invalid argument: " << e.what() << endl;
    }
    catch (const out_of_range& e)
    {
        cerr << "Out of range: " << e.what() << endl;
    }

    catch (...)
    {
        cerr << "Zlapano nieznany wyjatek";
    }


    return 0;
}