#include "stdafx.h"
#include "Complex.h"
using namespace std;


Complex::Complex()	//�����������
{
	re = 0;
	im = 0;
}


Complex::~Complex()	//����������
{
}


/*float Complex::Re()	//����������� ����� ����� 
{
	return re;
}*/


float Complex::Im()	//����������� ������ �����
{
	return im;
}


Complex::Complex(float x, float y)	//�����������
{
	re = x;
	im = y;
}


int Complex::Out()	//����� �� �����
{
	cout << re;
	if (im>0) cout << "+";
	if (im != 0) cout << im << "i" << endl;
	return 0;
}

ostream& operator<<(ostream& os, const Complex &c)	//���������� ������ �� �����
{
	os << c.re;
	if (c.im > 0) os << " + ";
	if (c.im != 0) os << c.im << "i";
	return os;
}

Complex Complex::operator/(double y)	//������� ������������ �� ������������
{
	Complex x;
	x.re = (re*y) / (y*y);
	x.im = (im*y) / (y*y);
	return x;
}
Complex Complex::operator*(double B)	// ��������� ������������ �� ������������
{
	Complex x;
	x.re = re * B;
	x.im = im * B;
	return x;
}

Complex Complex::operator+(Complex y)	//�������� ���� �����������
{
	Complex x;
	x.re = re + y.re;
	x.im = im + y.im;
	return x;
}

Complex Complex::operator-(Complex y)	//��������� ���� �����������
{
	Complex x;
	x.re = re - y.re;
	x.im = im - y.im;
	return x;
}

Complex Complex::operator/(Complex y)	//������� ������������ �� �����������
{
	Complex x;
	x.re = ((re*y.re) + (im*y.im)) / ((y.re*y.re) + (y.im*y.im));
	x.im = ((im*y.re) - (re*y.im)) / ((y.re*y.re) + (y.im*y.im));
	return x;
}

Complex Complex::operator*(Complex B)	//��������� ������������ �� �����������
{
	Complex X;
	X.re = (re*B.re) - (im*B.im);
	X.im = (re*B.im) + (B.re*im);
	return X;
}

Complex& const operator+(float real, Complex B)	//�������� float � complex
{
	Complex x;
	x.re = real + B.re;
	x.im = 0 + B.im;
	return x;
}


//��� �������
Complex Complex::operator^(int stepen)	//���������� ������������ ����� � �������
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