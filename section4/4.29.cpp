/**
sizeof
*/
#include <iostream>
#include <string>
#include <vector>
#include <cctype>//��������iostream��
#include <cstddef>//���������±�size_t��ָ�����ptrdiff_t����
#include <iterator>//����⺯��begin��end
#include <cstring>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;

int main()
{
	

	int x[10]; int *p = x;
	cout << sizeof(x) / sizeof(*x) << endl; // 10
	cout << sizeof(p) / sizeof(*p) << endl; // 2
	return 0;
}