// SraniyComplexZarabotay.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "Complex.h"
#include <iostream>
#include <vector>

int main()
{
	setlocale(LC_ALL, "Russian");
	Complex x(1, 2), y(2, 5), z(1,3), t(8,8);
	Complex massiv[] = { x, y };
	vector<Complex> vect(2);
	typedef vector<Complex>::iterator Viter;
	Viter itr;
	copy(massiv, massiv + 2, itr = vect.begin());
	cout << "Комплексный массив" << endl;
	for (int i = 0; i < (vect.end() - vect.begin()); i++)
	{
		cout << i + 1 << ". " << itr[i] << endl;
	}
	system("pause");
	vect.insert(vect.begin(), t);
	itr = vect.begin();
	for (int i = 0; i < (vect.end() - vect.begin()); i++)
	{
		cout << i + 1 << ". " << itr[i] << endl;
	}
	system("pause");
	vect.push_back(z);
	itr = vect.begin();
	for (int i = 0; i < (vect.end() - vect.begin()); i++)
	{
		cout << i + 1 << ". " << itr[i] << endl;
	}
	system("pause");
    return 0;
}

