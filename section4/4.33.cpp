/**
���������
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
	//���someValue��Ϊ0��x��y����1������x��y�ݼ�1
	int someValue=1;
	int x,y;
	someValue ? ++x, ++y : --x, --y;
	return 0;
}