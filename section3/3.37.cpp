/**
�ַ�����ĳ���
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
    //������Ҫ���ca�е������ַ�������caû���ַ�����β�������Ի��ӡ��δָ�������
	//const char ca[] = {'h','e','l','l','o'};
	const char ca[] = {'h','e','l','l','o','\0'};
	const char *cp = ca;
	while (*cp) {
		cout << *cp << endl;
		++cp;
	}
	return 0;
}