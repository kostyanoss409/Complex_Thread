#pragma once
#include <iostream>
using namespace std;
class Complex
{
	float re;//действительная часть числа
	float im;//мнимая часть числа
public:
	Complex();
	~Complex();
	float Re();
	float Im();
	int Out();
	Complex(float x, float y);
	Complex operator+(Complex y);
	Complex operator-(Complex y);
    Complex operator/(Complex y);
	Complex operator/(double y);
	Complex operator*(double B);
	friend Complex& operator+(float real, Complex B);
	/*friend ostream& operator+(float real, Complex A);*/
	friend ostream& operator<<(ostream& os, const Complex &c);
	Complex operator^(int degree);
    Complex operator*(Complex B);
	/*void Complex::sopr();*/
};

