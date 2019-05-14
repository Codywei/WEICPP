/**
默认构造函数
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

struct NoDefault {
	NoDefault(int i) {};
};

struct C {
	C() :n(0) {}
	NoDefault n;
};

int main(void)
{
	C c;
	return 0;
}