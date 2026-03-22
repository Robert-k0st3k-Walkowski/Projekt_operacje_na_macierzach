#include "pch.h"
#include "CppUnitTest.h"
#include"../projekt1/macierz.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestMacierzy
{
	TEST_CLASS(TestMacierzy)
	{
	public:
		
		TEST_METHOD(KONSTRUKTOR_DWA_PARAMETRY)
		{
			macierz m1(2, 2);
			macierz m2(5, 50);
			macierz m3(6, 22);
			macierz m4(-10, -107);
			macierz m5(33, 33);
			macierz m6(0, 0);
			macierz m7(7, -2);

			Assert::IsTrue(m1.pobierzX() == 2);
			Assert::IsTrue(m1.pobierzY() == 2);
			Assert::IsTrue(m2.pobierzX() == 5);
			Assert::IsTrue(m2.pobierzY() == 50);
			Assert::IsTrue(m3.pobierzX() == 6);
			Assert::IsTrue(m3.pobierzY() == 22);
			Assert::IsTrue(m4.pobierzX() == 1);
			Assert::IsTrue(m4.pobierzY() == 1);
			Assert::IsTrue(m5.pobierzX() == 33);
			Assert::IsTrue(m5.pobierzY() == 33);
			Assert::IsTrue(m6.pobierzX() == 0);
			Assert::IsTrue(m6.pobierzY() == 0);
			Assert::IsTrue(m7.pobierzX() == 1);
			Assert::IsTrue(m7.pobierzY() == 1);
		}

		TEST_METHOD(PRZYPISANIE_WARTOSCI)
		{
			macierz m1(2, 2);
			macierz m2(3, 3);
			macierz m3(1, 2);
			macierz m4(5, 5);
			macierz m5(10, 10);
			macierz m6(1, 3);
			macierz m7(3, 1);

			m1.przypisujWartosc(1, 1, 10);
			m2.przypisujWartosc(0, 2, 44);
			m3.przypisujWartosc(0, 0, -7);
			m4.przypisujWartosc(3, 2, 121);
			m5.przypisujWartosc(9, 9, 1024);
			m6.przypisujWartosc(0, 2, 66);
			m7.przypisujWartosc(2, 0, 321);

			Assert::IsTrue(m1.pobierzWartosc(1, 1) == 10);
			Assert::IsTrue(m2.pobierzWartosc(0, 2) == 44);
			Assert::IsTrue(m3.pobierzWartosc(0, 0) == -7);
			Assert::IsTrue(m4.pobierzWartosc(3, 2) == 121);
			Assert::IsTrue(m5.pobierzWartosc(9, 9) == 1024);
			Assert::IsTrue(m6.pobierzWartosc(0, 2) == 66);
			Assert::IsTrue(m7.pobierzWartosc(2, 0) == 321);
		}

		TEST_METHOD(OPERATOT_POROWNANIA)
		{
			macierz m1(2, 2);
			macierz m2(2, 2);
			macierz m3(1, 1);
			macierz m4(2, 1);
			macierz m5(1, 2);
			macierz m6(2, 1);
			macierz m7(1, 1);
			macierz m8(2, 2);
			macierz m9(1, 1);
			macierz m10(1, 1);

			m1.przypisujWartosc(0, 0, 4);
			m1.przypisujWartosc(0, 1, 4);
			m1.przypisujWartosc(1, 0, 4);
			m1.przypisujWartosc(1, 1, 4);
			m2.przypisujWartosc(0, 0, 10);
			m2.przypisujWartosc(0, 1, -2);
			m2.przypisujWartosc(1, 0, 17);
			m2.przypisujWartosc(1, 1, -44);
			m3.przypisujWartosc(0, 0, -5.5);
			m4.przypisujWartosc(0, 0, 5);
			m4.przypisujWartosc(1, 0, 10);
			m5.przypisujWartosc(0, 0, -22);
			m5.przypisujWartosc(0, 1, -8);
			m6.przypisujWartosc(0, 0, -5);
			m6.przypisujWartosc(1, 0, 1);
			m7.przypisujWartosc(0, 0, -5.5);
			m8.przypisujWartosc(0, 0, 4);
			m8.przypisujWartosc(0, 1, 4);
			m8.przypisujWartosc(1, 0, 4);
			m8.przypisujWartosc(1, 1, 4);
			m9.przypisujWartosc(0, 0, 0);
			m10.przypisujWartosc(0, 0, 0);

			Assert::IsTrue(m3 == m7);
			Assert::IsFalse(m1 == m4);
			Assert::IsTrue(m1 == m8);
			Assert::IsFalse(m2 == m8);
			Assert::IsFalse(m6 == m4);
			Assert::IsFalse(m3 == m5);
			Assert::IsTrue(m9 == m10);
		}
		TEST_METHOD(OPERATOR_DODAWANIA)
		{
			macierz m1(2, 2);
			macierz m2(2, 2);
			macierz m3(1, 1);
			macierz m4(2, 1);
			macierz m5(1, 2);
			macierz m6(2, 1);
			macierz m7(1, 1);
			macierz m8(2, 2);

			m1.przypisujWartosc(0, 0, 4);
			m1.przypisujWartosc(0, 1, 4);
			m1.przypisujWartosc(1, 0, 4);
			m1.przypisujWartosc(1, 1, 4);
			m2.przypisujWartosc(0, 0, 10);
			m2.przypisujWartosc(0, 1, -2);
			m2.przypisujWartosc(1, 0, 17);
			m2.przypisujWartosc(1, 1, -44);
			m3.przypisujWartosc(0, 0, 2);
			m4.przypisujWartosc(0, 0, 5);
			m4.przypisujWartosc(1, 0, 10);
			m5.przypisujWartosc(0, 0, -22);
			m5.przypisujWartosc(0, 1, -8);
			m6.przypisujWartosc(0, 0, -5);
			m6.przypisujWartosc(1, 0, 1);
			m7.przypisujWartosc(0, 0, -5.5);
			m8.przypisujWartosc(0, 0, 0);
			m8.przypisujWartosc(0, 1, 0);
			m8.przypisujWartosc(1, 0, 0);
			m8.przypisujWartosc(1, 1, 0);

			macierz wynik = m1 + m2;
			macierz wynik2 = m3 + m7;
			macierz wynik3 = m4 + m6;
			macierz wynik4 = m1 + m8;

			Assert::IsTrue(wynik.pobierzWartosc(0, 1) == 2);
			Assert::IsTrue(wynik.pobierzWartosc(1, 1) == -40);
			Assert::IsTrue(wynik2.pobierzWartosc(0, 0) == -3.5);
			Assert::IsTrue(wynik3.pobierzWartosc(0, 0) == 0);
			Assert::IsTrue(wynik3.pobierzWartosc(1, 0) == 11);
			Assert::IsTrue(wynik4.pobierzWartosc(0, 0) == 4);
			Assert::IsTrue(wynik.pobierzWartosc(1, 0) == 21);
			Assert::IsTrue(wynik4.pobierzWartosc(0, 1) == 4);
			Assert::IsTrue(wynik4.pobierzWartosc(1, 1) == 4);

			try
			{
				macierz wynikowa = m1 + m3;
			}
			catch (const std::invalid_argument& e)
			{
				Assert::IsTrue(true);
			}

			try
			{
				macierz wynikowa = m5 + m7;
			}
			catch (const std::invalid_argument& e)
			{
				Assert::IsTrue(true);
			}

			try
			{
				macierz wynikowa = m2 + m7;
			}
			catch (const std::invalid_argument& e)
			{
				Assert::IsTrue(true);
			}

			try
			{
				macierz wynikowa = m4 + m1;
			}
			catch (const std::invalid_argument& e)
			{
				Assert::IsTrue(true);
			}

			try
			{
				macierz wynikowa = m3 + m1;
			}
			catch (const std::invalid_argument& e)
			{
				Assert::IsTrue(true);
			}
		}

		TEST_METHOD(OPERATOR_ODEJMOWANIE)
		{
			macierz m1(2, 2);
			macierz m2(2, 2);
			macierz m3(1, 1);
			macierz m4(2, 1);
			macierz m5(1, 2);
			macierz m6(2, 1);
			macierz m7(1, 1);
			macierz m8(2, 2);

			m1.przypisujWartosc(0, 0, 4);
			m1.przypisujWartosc(0, 1, 4);
			m1.przypisujWartosc(1, 0, 4);
			m1.przypisujWartosc(1, 1, 4);
			m2.przypisujWartosc(0, 0, 10);
			m2.przypisujWartosc(0, 1, -2);
			m2.przypisujWartosc(1, 0, 17);
			m2.przypisujWartosc(1, 1, -44);
			m3.przypisujWartosc(0, 0, 2);
			m4.przypisujWartosc(0, 0, 5);
			m4.przypisujWartosc(1, 0, 10);
			m5.przypisujWartosc(0, 0, -22);
			m5.przypisujWartosc(0, 1, -8);
			m6.przypisujWartosc(0, 0, -5);
			m6.przypisujWartosc(1, 0, 1);
			m7.przypisujWartosc(0, 0, -5.5);
			m8.przypisujWartosc(0, 0, 0);
			m8.przypisujWartosc(0, 1, 0);
			m8.przypisujWartosc(1, 0, 0);
			m8.przypisujWartosc(1, 1, 0);

			macierz wynik = m1 - m2;
			macierz wynik2 = m3 - m7;
			macierz wynik3 = m4 - m6;
			macierz wynik4 = m1 - m8;

			Assert::IsTrue(wynik.pobierzWartosc(0, 1) == 6);
			Assert::IsTrue(wynik.pobierzWartosc(1, 1) == 48);
			Assert::IsTrue(wynik2.pobierzWartosc(0, 0) == 7.5);
			Assert::IsTrue(wynik3.pobierzWartosc(0, 0) == 10);
			Assert::IsTrue(wynik3.pobierzWartosc(1, 0) == 9);
			Assert::IsTrue(wynik4.pobierzWartosc(0, 0) == 4);
			Assert::IsTrue(wynik.pobierzWartosc(1, 0) == -13);
			Assert::IsTrue(wynik4.pobierzWartosc(0, 1) == 4);
			Assert::IsTrue(wynik4.pobierzWartosc(1, 1) == 4);

			try
			{
				macierz wynikowa = m1 - m3;
			}
			catch (const std::invalid_argument& e)
			{
				Assert::IsTrue(true);
			}

			try
			{
				macierz wynikowa = m5 - m7;
			}
			catch (const std::invalid_argument& e)
			{
				Assert::IsTrue(true);
			}

			try
			{
				macierz wynikowa = m2 - m7;
			}
			catch (const std::invalid_argument& e)
			{
				Assert::IsTrue(true);
			}

			try
			{
				macierz wynikowa = m4 - m1;
			}
			catch (const std::invalid_argument& e)
			{
				Assert::IsTrue(true);
			}

			try
			{
				macierz wynikowa = m3 - m1;
			}
			catch (const std::invalid_argument& e)
			{
				Assert::IsTrue(true);
			}
		}

		TEST_METHOD(OPERATOR_MNOZENIE)
		{
			macierz m1(2, 2);
			macierz m2(2, 2);
			macierz m3(1, 1);
			macierz m4(2, 1);
			macierz m5(1, 2);
			macierz m6(2, 1);
			macierz m7(1, 1);
			macierz m8(1, 2);

			m1.przypisujWartosc(0, 0, 4);
			m1.przypisujWartosc(0, 1, 4);
			m1.przypisujWartosc(1, 0, 4);
			m1.przypisujWartosc(1, 1, 4);
			m2.przypisujWartosc(0, 0, 10);
			m2.przypisujWartosc(0, 1, -2);
			m2.przypisujWartosc(1, 0, 17);
			m2.przypisujWartosc(1, 1, -44);
			m3.przypisujWartosc(0, 0, 2);
			m4.przypisujWartosc(0, 0, 5);
			m4.przypisujWartosc(1, 0, 10);
			m5.przypisujWartosc(0, 0, -22);
			m5.przypisujWartosc(0, 1, -8);
			m6.przypisujWartosc(0, 0, -5);
			m6.przypisujWartosc(1, 0, 1);
			m7.przypisujWartosc(0, 0, -5.5);
			m8.przypisujWartosc(0, 0, 0);
			m8.przypisujWartosc(0, 1, 0);

			macierz wynik = m1 * m2;
			macierz wynik2 = m3 * m7;
			macierz wynik3 = m5 * m6;
			macierz wynik4 = m8 * m6;

			Assert::IsTrue(wynik.pobierzWartosc(0, 1) == -184);
			Assert::IsTrue(wynik.pobierzWartosc(1, 1) == -184);
			Assert::IsTrue(wynik2.pobierzWartosc(0, 0) == -11);
			Assert::IsTrue(wynik3.pobierzWartosc(0, 0) == 102);
			Assert::IsTrue(wynik4.pobierzWartosc(0, 0) == 0);
			Assert::IsTrue(wynik.pobierzWartosc(1, 0) == 108);

			try
			{
				macierz wynikowa = m1 * m3;
			}
			catch (const std::invalid_argument& e)
			{
				Assert::IsTrue(true);
			}

			try
			{
				macierz wynikowa = m5 * m1;
			}
			catch (const std::invalid_argument& e)
			{
				Assert::IsTrue(true);
			}

			try
			{
				macierz wynikowa = m2 * m7;
			}
			catch (const std::invalid_argument& e)
			{
				Assert::IsTrue(true);
			}

			try
			{
				macierz wynikowa = m4 * m1;
			}
			catch (const std::invalid_argument& e)
			{
				Assert::IsTrue(true);
			}

			try
			{
				macierz wynikowa = m3 * m1;
			}
			catch (const std::invalid_argument& e)
			{
				Assert::IsTrue(true);
			}
		}

		TEST_METHOD(OPERATOR_PRZEPISANIE)
		{
			macierz m1(2, 2);
			macierz m2(2, 2);
			macierz m3(1, 1);
			macierz m4(2, 1);
			macierz m5(1, 2);
			macierz m6(2, 1);
			macierz m7(1, 1);
			macierz m8(1, 2);

			m1.przypisujWartosc(0, 0, 4);
			m1.przypisujWartosc(0, 1, 4);
			m1.przypisujWartosc(1, 0, 4);
			m1.przypisujWartosc(1, 1, 4);
			m2.przypisujWartosc(0, 0, 10);
			m2.przypisujWartosc(0, 1, -2);
			m2.przypisujWartosc(1, 0, 17);
			m2.przypisujWartosc(1, 1, -44);
			m3.przypisujWartosc(0, 0, 2);
			m4.przypisujWartosc(0, 0, 5);
			m4.przypisujWartosc(1, 0, 10);
			m5.przypisujWartosc(0, 0, -22);
			m5.przypisujWartosc(0, 1, -8);
			m6.przypisujWartosc(0, 0, -5);
			m6.przypisujWartosc(1, 0, 1);
			m7.przypisujWartosc(0, 0, -5.5);
			m8.przypisujWartosc(0, 0, 0);
			m8.przypisujWartosc(0, 1, 0);

			macierz wynik = (m1 = m2);
			macierz wynik2 = (m3 = m7);
			macierz wynik3 = (m5 = m8);
			macierz wynik4 = (m4 = m6);

			Assert::IsTrue(wynik.pobierzWartosc(0, 0) == 10);
			Assert::IsTrue(wynik.pobierzWartosc(1, 1) == -44);
			Assert::IsTrue(wynik2.pobierzWartosc(0, 0) == -5.5);
			Assert::IsTrue(wynik3.pobierzWartosc(0, 0) == 0);
			Assert::IsTrue(wynik3.pobierzWartosc(0, 1) == 0);
			Assert::IsTrue(wynik4.pobierzWartosc(0, 0) == -5);
			Assert::IsTrue(wynik.pobierzWartosc(1, 0) == 17);
			Assert::IsTrue(wynik4.pobierzWartosc(1, 0) == 1);
		}

		TEST_METHOD(OPERATOR_MNOZENIE_PRZEPISANIE)
		{
			macierz m1(2, 2);
			macierz m2(2, 2);
			macierz m3(1, 1);
			macierz m4(2, 1);
			macierz m5(1, 2);
			macierz m6(2, 1);
			macierz m7(1, 1);
			macierz m8(1, 2);

			m1.przypisujWartosc(0, 0, 4);
			m1.przypisujWartosc(0, 1, 4);
			m1.przypisujWartosc(1, 0, 4);
			m1.przypisujWartosc(1, 1, 4);
			m2.przypisujWartosc(0, 0, 10);
			m2.przypisujWartosc(0, 1, -2);
			m2.przypisujWartosc(1, 0, 17);
			m2.przypisujWartosc(1, 1, -44);
			m3.przypisujWartosc(0, 0, 2);
			m4.przypisujWartosc(0, 0, 5);
			m4.przypisujWartosc(1, 0, 10);
			m5.przypisujWartosc(0, 0, -22);
			m5.przypisujWartosc(0, 1, -8);
			m6.przypisujWartosc(0, 0, -5);
			m6.przypisujWartosc(1, 0, 1);
			m7.przypisujWartosc(0, 0, -5.5);
			m8.przypisujWartosc(0, 0, 0);
			m8.przypisujWartosc(0, 1, 0);

			macierz wynik = m1;
			wynik *= m2;
			macierz wynik3 = m5;
			wynik3 *= m6;
			macierz wynik4 = m8;
			wynik4 *= m6;

			Assert::IsTrue(wynik.pobierzWartosc(0, 1) == -184);
			Assert::IsTrue(wynik.pobierzWartosc(1, 1) == -184);
			Assert::IsTrue(wynik3.pobierzWartosc(0, 0) == 102);
			Assert::IsTrue(wynik4.pobierzWartosc(0, 0) == 0);
			Assert::IsTrue(wynik.pobierzWartosc(1, 0) == 108);

			try
			{
				macierz wynikowa = m1;
				wynikowa *= m3;
			}
			catch (const std::invalid_argument& e)
			{
				Assert::IsTrue(true);
			}
			
			try
			{
				macierz wynikowa2 = m5;
				wynikowa2 *= m1;
			}
			catch (const std::invalid_argument& e)
			{
				Assert::IsTrue(true);
			}
			
			try
			{
				macierz wynikowa3 = m2;
				wynikowa3 *= m7;
			}
			catch (const std::invalid_argument& e)
			{
				Assert::IsTrue(true);
			}
			
			try
			{
				macierz wynikowa4 = m4;
				wynikowa4 *= m7;
			}
			catch (const std::invalid_argument& e)
			{
				Assert::IsTrue(true);
			}
			
			try
			{
				macierz wynikowa5 = m3;
				wynikowa5 *= m1;
			}
			catch (const std::invalid_argument& e)
			{
				Assert::IsTrue(true);
			}
		}

		TEST_METHOD(OPERATOR_DODAWANIA_PRZEPISANIE)
		{
			macierz m1(2, 2);
			macierz m2(2, 2);
			macierz m3(1, 1);
			macierz m4(2, 1);
			macierz m5(1, 2);
			macierz m6(2, 1);
			macierz m7(1, 1);
			macierz m8(2, 2);

			m1.przypisujWartosc(0, 0, 4);
			m1.przypisujWartosc(0, 1, 4);
			m1.przypisujWartosc(1, 0, 4);
			m1.przypisujWartosc(1, 1, 4);
			m2.przypisujWartosc(0, 0, 10);
			m2.przypisujWartosc(0, 1, -2);
			m2.przypisujWartosc(1, 0, 17);
			m2.przypisujWartosc(1, 1, -44);
			m3.przypisujWartosc(0, 0, 2);
			m4.przypisujWartosc(0, 0, 5);
			m4.przypisujWartosc(1, 0, 10);
			m5.przypisujWartosc(0, 0, -22);
			m5.przypisujWartosc(0, 1, -8);
			m6.przypisujWartosc(0, 0, -5);
			m6.przypisujWartosc(1, 0, 1);
			m7.przypisujWartosc(0, 0, -5.5);
			m8.przypisujWartosc(0, 0, 0);
			m8.przypisujWartosc(0, 1, 0);
			m8.przypisujWartosc(1, 0, 0);
			m8.przypisujWartosc(1, 1, 0);

			macierz wynik = m1;
			wynik += m2;
			macierz wynik2 = m3;
			wynik2 += m7;
			macierz wynik3 = m4;
			wynik3 += m6;
			macierz wynik4 = m1;
			wynik4 += m8;

			Assert::IsTrue(wynik.pobierzWartosc(0, 1) == 2);
			Assert::IsTrue(wynik.pobierzWartosc(1, 1) == -40);
			Assert::IsTrue(wynik2.pobierzWartosc(0, 0) == -3.5);
			Assert::IsTrue(wynik3.pobierzWartosc(0, 0) == 0);
			Assert::IsTrue(wynik3.pobierzWartosc(1, 0) == 11);
			Assert::IsTrue(wynik4.pobierzWartosc(0, 0) == 4);
			Assert::IsTrue(wynik.pobierzWartosc(1, 0) == 21);
			Assert::IsTrue(wynik4.pobierzWartosc(0, 1) == 4);
			Assert::IsTrue(wynik4.pobierzWartosc(1, 1) == 4);

			try
			{
				macierz wynikowa = m1;
				wynikowa += m3;
			}
			catch (const std::invalid_argument& e)
			{
				Assert::IsTrue(true);
			}

			try
			{
				macierz wynikowa2 = m5;
				wynikowa2 += m7;
			}
			catch (const std::invalid_argument& e)
			{
				Assert::IsTrue(true);
			}

			try
			{
				macierz wynikowa3 = m2;
				wynikowa3 += m7;
			}
			catch (const std::invalid_argument& e)
			{
				Assert::IsTrue(true);
			}

			try
			{
				macierz wynikowa4 = m4;
				wynikowa4 += m1;
			}
			catch (const std::invalid_argument& e)
			{
				Assert::IsTrue(true);
			}

			try
			{
				macierz wynikowa5 = m3;
				wynikowa5 += m1;
			}
			catch (const std::invalid_argument& e)
			{
				Assert::IsTrue(true);
			}
		}

		TEST_METHOD(OPERATOR_ODEJMOWANIE_PRZYPISANIE)
		{
			macierz m1(2, 2);
			macierz m2(2, 2);
			macierz m3(1, 1);
			macierz m4(2, 1);
			macierz m5(1, 2);
			macierz m6(2, 1);
			macierz m7(1, 1);
			macierz m8(2, 2);

			m1.przypisujWartosc(0, 0, 4);
			m1.przypisujWartosc(0, 1, 4);
			m1.przypisujWartosc(1, 0, 4);
			m1.przypisujWartosc(1, 1, 4);
			m2.przypisujWartosc(0, 0, 10);
			m2.przypisujWartosc(0, 1, -2);
			m2.przypisujWartosc(1, 0, 17);
			m2.przypisujWartosc(1, 1, -44);
			m3.przypisujWartosc(0, 0, 2);
			m4.przypisujWartosc(0, 0, 5);
			m4.przypisujWartosc(1, 0, 10);
			m5.przypisujWartosc(0, 0, -22);
			m5.przypisujWartosc(0, 1, -8);
			m6.przypisujWartosc(0, 0, -5);
			m6.przypisujWartosc(1, 0, 1);
			m7.przypisujWartosc(0, 0, -5.5);
			m8.przypisujWartosc(0, 0, 0);
			m8.przypisujWartosc(0, 1, 0);
			m8.przypisujWartosc(1, 0, 0);
			m8.przypisujWartosc(1, 1, 0);

			macierz wynik = m1;
			wynik -= m2;
			macierz wynik2 = m3;
			wynik2 -= m7;
			macierz wynik3 = m4;
			wynik3 -= m6;
			macierz wynik4 = m1;
			wynik4 -= m8;

			Assert::IsTrue(wynik.pobierzWartosc(0, 1) == 6);
			Assert::IsTrue(wynik.pobierzWartosc(1, 1) == 48);
			Assert::IsTrue(wynik2.pobierzWartosc(0, 0) == 7.5);
			Assert::IsTrue(wynik3.pobierzWartosc(0, 0) == 10);
			Assert::IsTrue(wynik3.pobierzWartosc(1, 0) == 9);
			Assert::IsTrue(wynik4.pobierzWartosc(0, 0) == 4);
			Assert::IsTrue(wynik.pobierzWartosc(1, 0) == -13);
			Assert::IsTrue(wynik4.pobierzWartosc(0, 1) == 4);
			Assert::IsTrue(wynik4.pobierzWartosc(1, 1) == 4);

			try
			{
				macierz wynikowa = m1;
				wynikowa -= m3;
			}
			catch (const std::invalid_argument& e)
			{
				Assert::IsTrue(true);
			}

			try
			{
				macierz wynikowa2 = m5;
				wynikowa2 -= m7;
			}
			catch (const std::invalid_argument& e)
			{
				Assert::IsTrue(true);
			}

			try
			{
				macierz wynikowa3 = m2;
				wynikowa3 -= m7;
			}
			catch (const std::invalid_argument& e)
			{
				Assert::IsTrue(true);
			}

			try
			{
				macierz wynikowa4 = m4;
				wynikowa4 -= m1;
			}
			catch (const std::invalid_argument& e)
			{
				Assert::IsTrue(true);
			}

			try
			{
				macierz wynikowa5 = m3;
				wynikowa5 -= m1;
			}
			catch (const std::invalid_argument& e)
			{
				Assert::IsTrue(true);
			}
		}
		TEST_METHOD(OPERATOR_NIEROWNOSCI)
		{
				macierz m1(2, 2);
				macierz m2(2, 2);
				macierz m3(1, 1);
				macierz m4(2, 1);
				macierz m5(1, 2);
				macierz m6(2, 1);
				macierz m7(1, 1);
				macierz m8(2, 2);
				macierz m9(1, 1);
				macierz m10(1, 1);

				m1.przypisujWartosc(0, 0, 4);
				m1.przypisujWartosc(0, 1, 4);
				m1.przypisujWartosc(1, 0, 4);
				m1.przypisujWartosc(1, 1, 4);
				m2.przypisujWartosc(0, 0, 10);
				m2.przypisujWartosc(0, 1, -2);
				m2.przypisujWartosc(1, 0, 17);
				m2.przypisujWartosc(1, 1, -44);
				m3.przypisujWartosc(0, 0, -5.5);
				m4.przypisujWartosc(0, 0, 5);
				m4.przypisujWartosc(1, 0, 10);
				m5.przypisujWartosc(0, 0, -22);
				m5.przypisujWartosc(0, 1, -8);
				m6.przypisujWartosc(0, 0, -5);
				m6.przypisujWartosc(1, 0, 1);
				m7.przypisujWartosc(0, 0, -5.5);
				m8.przypisujWartosc(0, 0, 4);
				m8.przypisujWartosc(0, 1, 4);
				m8.przypisujWartosc(1, 0, 4);
				m8.przypisujWartosc(1, 1, 4);
				m9.przypisujWartosc(0, 0, 0);
				m10.przypisujWartosc(0, 0, 0);

				Assert::IsFalse(m3 != m7);
				Assert::IsTrue(m1 != m4);
				Assert::IsFalse(m1 != m8);
				Assert::IsTrue(m2 != m8);
				Assert::IsTrue(m6 != m4);
				Assert::IsTrue(m3 != m5);
				Assert::IsFalse(m9 != m10);
		}

		TEST_METHOD(LICZBA_MNOZENIE_MACIERZ)
		{
			macierz m1(2, 2);
			macierz m2(2, 2);
			macierz m3(1, 1);
			macierz m4(2, 1);
			macierz m5(1, 2);
			macierz m6(2, 1);
			macierz m7(1, 1);

			m1.przypisujWartosc(0, 0, 4);
			m1.przypisujWartosc(0, 1, 4);
			m1.przypisujWartosc(1, 0, 4);
			m1.przypisujWartosc(1, 1, 4);
			m2.przypisujWartosc(0, 0, 10);
			m2.przypisujWartosc(0, 1, -2);
			m2.przypisujWartosc(1, 0, 17);
			m2.przypisujWartosc(1, 1, -44);
			m3.przypisujWartosc(0, 0, -5.5);
			m4.przypisujWartosc(0, 0, 5);
			m4.przypisujWartosc(1, 0, 10);
			m5.przypisujWartosc(0, 0, -22);
			m5.przypisujWartosc(0, 1, -8);
			m6.przypisujWartosc(0, 0, -5);
			m6.przypisujWartosc(1, 0, 1);
			m7.przypisujWartosc(0, 0, -5.5);

			macierz wynik = (2.5 * m1);
			macierz wynik2 = (-1.0 * m2);
			macierz wynik3 = (-2.0 * m3);
			macierz wynik4 = (10.0 * m4);
			macierz wynik5 = (0.0 * m5);
			macierz wynik6 = (-0.5 * m6);
			macierz wynik7 = (4.0 * m7);

			Assert::IsTrue(wynik.pobierzWartosc(1, 1) == 10);
			Assert::IsTrue(wynik2.pobierzWartosc(0, 0) == -10);
			Assert::IsTrue(wynik2.pobierzWartosc(1, 0) == -17);
			Assert::IsTrue(wynik3.pobierzWartosc(0, 0) == 11);
			Assert::IsTrue(wynik4.pobierzWartosc(1, 0) == 100);
			Assert::IsTrue(wynik5.pobierzWartosc(0, 1) == 0);
			Assert::IsTrue(wynik6.pobierzWartosc(0, 0) == 2.5);
			Assert::IsTrue(wynik7.pobierzWartosc(0, 0) == -22);
		}

		TEST_METHOD(MACIERZ_MNOZENIE_LICZBA)
		{
			macierz m1(2, 2);
			macierz m2(2, 2);
			macierz m3(1, 1);
			macierz m4(2, 1);
			macierz m5(1, 2);
			macierz m6(2, 1);
			macierz m7(1, 1);

			m1.przypisujWartosc(0, 0, 4);
			m1.przypisujWartosc(0, 1, 4);
			m1.przypisujWartosc(1, 0, 4);
			m1.przypisujWartosc(1, 1, 4);
			m2.przypisujWartosc(0, 0, 10);
			m2.przypisujWartosc(0, 1, -2);
			m2.przypisujWartosc(1, 0, 17);
			m2.przypisujWartosc(1, 1, -44);
			m3.przypisujWartosc(0, 0, -5.5);
			m4.przypisujWartosc(0, 0, 5);
			m4.przypisujWartosc(1, 0, 10);
			m5.przypisujWartosc(0, 0, -22);
			m5.przypisujWartosc(0, 1, -8);
			m6.przypisujWartosc(0, 0, -5);
			m6.przypisujWartosc(1, 0, 1);
			m7.przypisujWartosc(0, 0, -5.5);

			macierz wynik = (m1 * 2.5);
			macierz wynik2 = (m2 * (-1.0));
			macierz wynik3 = (m3 * (-2.0));
			macierz wynik4 = (m4 * 10.0);
			macierz wynik5 = (m5 * 0.0);
			macierz wynik6 = (m6 * (-0.5));
			macierz wynik7 = (m7 * 4.0);

			Assert::IsTrue(wynik.pobierzWartosc(1, 1) == 10);
			Assert::IsTrue(wynik2.pobierzWartosc(0, 0) == -10);
			Assert::IsTrue(wynik2.pobierzWartosc(1, 0) == -17);
			Assert::IsTrue(wynik3.pobierzWartosc(0, 0) == 11);
			Assert::IsTrue(wynik4.pobierzWartosc(1, 0) == 100);
			Assert::IsTrue(wynik5.pobierzWartosc(0, 1) == 0);
			Assert::IsTrue(wynik6.pobierzWartosc(0, 0) == 2.5);
			Assert::IsTrue(wynik7.pobierzWartosc(0, 0) == -22);
		}

		TEST_METHOD(OPERATOR_STRUMIENIA)
		{
			macierz m1(2, 2);
			macierz m2(2, 2);
			macierz m3(1, 1);
			macierz m4(2, 1);
			macierz m5(1, 2);
			macierz m6(2, 1);
			macierz m7(1, 1);

			m1.przypisujWartosc(0, 0, 4);
			m1.przypisujWartosc(0, 1, 4);
			m1.przypisujWartosc(1, 0, 4);
			m1.przypisujWartosc(1, 1, 4);
			m2.przypisujWartosc(0, 0, 10);
			m2.przypisujWartosc(0, 1, -2);
			m2.przypisujWartosc(1, 0, 17);
			m2.przypisujWartosc(1, 1, -44);
			m3.przypisujWartosc(0, 0, -5.5);
			m4.przypisujWartosc(0, 0, 5);
			m4.przypisujWartosc(1, 0, 10);
			m5.przypisujWartosc(0, 0, -22);
			m5.przypisujWartosc(0, 1, -8);
			m6.przypisujWartosc(0, 0, -5);
			m6.przypisujWartosc(1, 0, 1);
			m7.przypisujWartosc(0, 0, 0);

			ostringstream stru1, stru2, stru3, stru4, stru5, stru6, stru7;
			stru1 << m1;
			stru2 << m2;
			stru3 << m3;
			stru4 << m4;
			stru5 << m5;
			stru6 << m6;
			stru7 << m7;

			string oczekiwany = "[\t4\t4\t]\n[\t4\t4\t]\n";
			string oczekiwany2 = "[\t10\t-2\t]\n[\t17\t-44\t]\n";
			string oczekiwany3 = "[\t-5.5\t]\n";
			string oczekiwany4 = "[\t5\t]\n[\t10\t]\n";
			string oczekiwany5 = "[\t-22\t-8\t]\n";
			string oczekiwany6 = "[\t-5\t]\n[\t1\t]\n";
			string oczekiwany7 = "[\t0\t]\n";

			Assert::AreEqual(oczekiwany, stru1.str());
			Assert::AreEqual(oczekiwany2, stru2.str());
			Assert::AreEqual(oczekiwany3, stru3.str());
			Assert::AreEqual(oczekiwany4, stru4.str());
			Assert::AreEqual(oczekiwany5, stru5.str());
			Assert::AreEqual(oczekiwany6, stru6.str());
			Assert::AreEqual(oczekiwany7, stru7.str());
		}

		TEST_METHOD(TRANSPOZYCJA)
		{
			macierz m1(2, 2);
			macierz m2(2, 2);
			macierz m3(1, 1);
			macierz m4(2, 1);
			macierz m5(1, 2);
			macierz m6(2, 1);
			macierz m7(1, 1);

			m1.przypisujWartosc(0, 0, 4);
			m1.przypisujWartosc(0, 1, 4);
			m1.przypisujWartosc(1, 0, 4);
			m1.przypisujWartosc(1, 1, 4);
			m2.przypisujWartosc(0, 0, 10);
			m2.przypisujWartosc(0, 1, -2);
			m2.przypisujWartosc(1, 0, 17);
			m2.przypisujWartosc(1, 1, -44);
			m3.przypisujWartosc(0, 0, -5.5);
			m4.przypisujWartosc(0, 0, 5);
			m4.przypisujWartosc(1, 0, 10);
			m5.przypisujWartosc(0, 0, -22);
			m5.przypisujWartosc(0, 1, -8);
			m6.przypisujWartosc(0, 0, -5);
			m6.przypisujWartosc(1, 0, 1);
			m7.przypisujWartosc(0, 0, -5.5);

			macierz transponowana = m1.transpozycja();
			macierz transponowana2 = m2.transpozycja();
			macierz transponowana3 = m3.transpozycja();
			macierz transponowana4 = m4.transpozycja();
			macierz transponowana5 = m5.transpozycja();
			macierz transponowana6 = m6.transpozycja();
			macierz transponowana7 = m7.transpozycja();

			Assert::IsTrue(transponowana.pobierzWartosc(0, 1) == 4);
			Assert::IsTrue(transponowana2.pobierzWartosc(1, 0) == -2);
			Assert::IsTrue(transponowana3.pobierzWartosc(0, 0) == -5.5);
			Assert::IsTrue(transponowana4.pobierzWartosc(0, 1) == 10);
			Assert::IsTrue(transponowana5.pobierzWartosc(1, 0) == -8);
			Assert::IsTrue(transponowana6.pobierzWartosc(0, 0) == -5);
			Assert::IsTrue(transponowana7.pobierzWartosc(0, 0) == -5.5);
			Assert::IsTrue(transponowana2.pobierzWartosc(1, 1) == -44);
			Assert::IsFalse(transponowana2.pobierzWartosc(0, 1) == 0);
			Assert::IsFalse(transponowana4.pobierzWartosc(0, 1) == 50);
		}

		TEST_METHOD(SLAD)
		{
			macierz m1(2, 2);
			macierz m2(2, 2);
			macierz m3(1, 1);
			macierz m4(2, 1);
			macierz m5(1, 2);
			macierz m6(2, 1);
			macierz m7(1, 1);

			m1.przypisujWartosc(0, 0, 4);
			m1.przypisujWartosc(0, 1, 4);
			m1.przypisujWartosc(1, 0, 4);
			m1.przypisujWartosc(1, 1, 4);
			m2.przypisujWartosc(0, 0, 10);
			m2.przypisujWartosc(0, 1, -2);
			m2.przypisujWartosc(1, 0, 17);
			m2.przypisujWartosc(1, 1, -44);
			m3.przypisujWartosc(0, 0, -5.5);
			m4.przypisujWartosc(0, 0, 5);
			m4.przypisujWartosc(1, 0, 10);
			m5.przypisujWartosc(0, 0, -22);
			m5.przypisujWartosc(0, 1, -8);
			m6.przypisujWartosc(0, 0, -5);
			m6.przypisujWartosc(1, 0, 1);
			m7.przypisujWartosc(0, 0, -5.5);

			double wynik = m1.slad();
			double wynik2 = m2.slad();
			double wynik3 = m3.slad();
			double wynik7 = m7.slad();

			Assert::IsTrue(wynik == 8);
			Assert::IsTrue(wynik2 == -34);
			Assert::IsTrue(wynik3 == -5.5);
			Assert::IsTrue(wynik7 == wynik3);

			try
			{
				double wynik4 = m4.slad();
			}
			catch (const std::invalid_argument& e)
			{
				Assert::IsFalse(false);
			}

			try
			{
				double wynik5 = m5.slad();
			}
			catch (const std::invalid_argument& e)
			{
				Assert::IsFalse(false);
			}

			try
			{
				double wynik6 = m6.slad();
			}
			catch (const std::invalid_argument& e)
			{
				Assert::IsFalse(false);
			}
		}
	};
}
