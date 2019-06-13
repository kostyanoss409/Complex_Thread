// SraniyComplexZarabotay.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "Complex.h"
#include <iostream>
#include <vector>
#include <fstream>

void main()
{
	ofstream fout("bin", ios::out | ios::binary);
	ifstream fin("bin", ios::in | ios::binary);
	setlocale(LC_ALL, "Russian");
	Complex x(1, 2), y(2, 5), z(1,3), t(8,8);
	Complex massiv[] = { x, y,z,t };
	Complex massiv1[4];
	cout << "Комплексный массив" << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << i + 1 << ". " << massiv[i] << endl;
	}
	system("pause");
	fout.write((char*)&massiv, sizeof(massiv));
	fout.close();
	cout << "Записано в файл" << endl;
	system("pause");
	cout << "Из файла" << endl;
	fin.read((char*)&massiv1, sizeof(massiv1));
	for (int i = 0; i < 4; i++)
	{
		cout << i + 1 << ". " << massiv1[i] << endl;
	}
	fin.close();
	system("pause");
}

