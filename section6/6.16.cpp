/**
�������ÿ��Դ���������
*/
#include <iostream>
#include <string>
#include <vector>
#include <cctype>//��������iostream��
#include <cstddef>//���������±�size_t��ָ�����ptrdiff_t����
#include <iterator>//����⺯��begin��end
#include <cstring>
#include <stdexcept>
#include <exception>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;
using std::runtime_error;
using std::exception;

// ��Ϊ�ββ��ǳ������ã����Բ��ܸ����������ַ�������ֵ��const������Ҫת�������ʹ�����
//bool is_empty(string &s) { return s.empty(); }
// ����
bool is_empty(const string &s) { return s.empty(); }
int main()
{
	return 0;
}