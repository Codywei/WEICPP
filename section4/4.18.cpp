/**
ǰ�õ��������
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

//ǰ�õ����������ȡ������һ��Ԫ�أ�����ȥȡʸ�����һ��Ԫ�صĺ�һ�������ڵ�Ԫ��
int main()
{   
    vector<int> v={1,2,3,4};
	auto pbeg = v.begin();
	// ���Ԫ��ֱ��������һ����ֵΪֹ
	while (pbeg != v.end() && *pbeg >= 0)
		cout << *++pbeg << endl;//���
	return 0;
}