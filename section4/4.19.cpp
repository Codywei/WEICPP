/**
��ֵ�����
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
	//a. ���ptr��Ϊ��ָ�룬�ͽ����ã�����ptrָ����һ��
	//ptr!=0&&*ptr++;

	//b. �Ƚ�ival�͵���1���ival����
	//ival++&&ival;

	//c. ������������<=��ߵ�ֵ��Ҳ��������<=�ұߵ�ֵ
	//vec[ival++]<=vec[ival];

	//�޸�
	/*
	int tmp = ival + 1;
	vec[ival] <= vec[tmp];
	*/

	return 0;
}