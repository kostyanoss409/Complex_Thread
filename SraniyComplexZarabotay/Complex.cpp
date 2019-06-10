#include "stdafx.h"
#include "Complex.h"
using namespace std;


Complex::Complex()	//Конструктор
{
	re = 0;
	im = 0;
}


Complex::~Complex()	//Деструктор
{
}


/*float Complex::Re()	//Возвращение целой части 
{
	return re;
}*/


float Complex::Im()	//Возвращение мнимой части
{
	return im;
}


Complex::Complex(float x, float y)	//Конструктор
{
	re = x;
	im = y;
}


int Complex::Out()	//Вывод на экран
{
	cout << re;
	if (im>0) cout << "+";
	if (im != 0) cout << im << "i" << endl;
	return 0;
}

ostream& operator<<(ostream& os, const Complex &c)	//Перегрузка вывода на экран
{
	os << c.re;
	if (c.im > 0) os << " + ";
	if (c.im != 0) os << c.im << "i";
	return os;
}

Complex Complex::operator/(double y)	//Деление комплексного на вещественное
{
	Complex x;
	x.re = (re*y) / (y*y);
	x.im = (im*y) / (y*y);
	return x;
}
Complex Complex::operator*(double B)	// Умножение комплексного на вещественное
{
	Complex x;
	x.re = re * B;
	x.im = im * B;
	return x;
}

Complex Complex::operator+(Complex y)	//Сложение двух комплексных
{
	Complex x;
	x.re = re + y.re;
	x.im = im + y.im;
	return x;
}

Complex Complex::operator-(Complex y)	//Вычитание двух комплексных
{
	Complex x;
	x.re = re - y.re;
	x.im = im - y.im;
	return x;
}

Complex Complex::operator/(Complex y)	//Деление комплексного на комплексное
{
	Complex x;
	x.re = ((re*y.re) + (im*y.im)) / ((y.re*y.re) + (y.im*y.im));
	x.im = ((im*y.re) - (re*y.im)) / ((y.re*y.re) + (y.im*y.im));
	return x;
}

Complex Complex::operator*(Complex B)	//Умножение комплексного на комплексное
{
	Complex X;
	X.re = (re*B.re) - (im*B.im);
	X.im = (re*B.im) + (B.re*im);
	return X;
}

Complex& const operator+(float real, Complex B)	//Сложение float и complex
{
	Complex x;
	x.re = real + B.re;
	x.im = 0 + B.im;
	return x;
}


//Мое задание
Complex Complex::operator^(int stepen)	//Возведение комплексного числа в степень
{
	Complex X;
	X.re = re;
	X.im = im;
	for (int i = 1; i < stepen; i++)
	{
		X = X * (*this);
	}
	return X;
}