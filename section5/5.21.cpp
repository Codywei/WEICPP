/**
��д5.20
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
	string prev;
	string now;
	while (cin >> now)
	{
		if (now.empty() || !isupper(now[0]))
			continue;
		if (now == prev)
			break;
		prev = now;
	}
	cout << prev << endl;
	return 0;
}