/**
�����±꣨size_t���ͣ�
*/
#include <iostream>
#include <string>
#include <vector>
#include <cctype>//��������iostream��
#include <cstddef>//���������±�size_t����
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
	//size_t�ǻ�����ص��޷�������
	const size_t array_size = 10;
	int ia[array_size];

	// Ӧ����ix<array_size����Ӧ����<=
	//for (size_t ix = 0; ix <= array_size; ix++)
	for (size_t ix = 0; ix < array_size; ix++)
		ia[ix] = ix;
	return 0;
}