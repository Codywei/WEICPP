/**
forѭ��ʹ�ó���
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
	//a. forѭ��sz��

	//for (int ix = 0; ix != sz; ++ix) { /* ... */ }
	//if( ix != sz )
	//	//...

	// ix�Ƕ�����forѭ���ڵģ�����ѭ�����if��䲻�ܷ���ix
	// �޸ģ�
	//int ix;
	//for (ix = 0; ix != sz; ++ix) { /* ... */ }
	//if( ix != sz )
	//	//...

	//b. forѭ��sz��...

	//int ix;
	//for (ix != sz; ++ix) { /*...*/ }

	// ixû�г�ʼ��;
	// �޸�

	//int ix=0;
	//for (; ix != sz; ++ix) { /*...*/ }

	//c. forѭ��sz��
	//for (int ix = 0; ix != sz; ++ix, ++sz) {/*...*/ }

	
	// �޸�
	//for (int ix = 0; ix != sz; ++ix) {/*...*/ }

	
	return 0;
}