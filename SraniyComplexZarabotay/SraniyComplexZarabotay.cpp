// SraniyComplexZarabotay.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Complex.h"
#include <iostream>
#include <thread>
using namespace std;
void wait(Complex C, int i)
{
	this_thread::sleep_for(chrono::seconds(i));
	C.Out();
}
int main()
{
	Complex x(1, 2), y(2, 5), z;	
	thread t1([&]() { z = x + y; wait(z, 3); cout <<" + "<< endl; });	
	thread t2([&]() { z = x - y; wait(z, 6); cout <<" - "<< endl; });
	thread t3([&]() { z = x * y; wait(z, 10); cout <<" * "<< endl; });
	thread t4([&]() { z = x / y; wait(z, 1); cout <<" / "<< endl; });
	if (t1.joinable()) t1.join();
	if (t2.joinable()) t2.join();
	if (t3.joinable()) t3.join();
	if (t4.joinable()) t4.join();
	system("pause");
    return 0;
}

