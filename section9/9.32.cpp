/**
vector insert����
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
#include <initializer_list>
#include <cstdlib> // ����main������������EXIT_FAILURE��EXIT_SUCCESS
#include <cassert> // ����assert
#include <fstream>
#include <sstream>
#include <list>
#include <array>
#include <deque>
#include <forward_list>
using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::string;
using std::vector;
using std::begin;
using std::end;
using std::runtime_error;
using std::exception;
using std::initializer_list;
using std::iostream;
using std::istream;
using std::ostream;
using std::flush;
using std::ends;
using std::unitbuf;
using std::nounitbuf;
using std::fstream;
using std::ifstream;
using std::ofstream;
using std::stringstream;
using std::istringstream;
using std::ostringstream;
using std::list;
using std::deque;
using std::array;
using std::forward_list;

typedef string::size_type sz;

int main()
{
	/*
	�Ƿ�����Ϊ(iter,*iter++)����ȷ������iter��������*iter++
	*/
	vector<int> iv = { 0,1,2,3,4,5,6,7,8,9 };
	auto iter = iv.begin();
	while (iter != iv.end()) {
		if (*iter % 2) {
			iter = iv.insert(iter, *iter++);
			iter += 2;
		}
		else
			iter = iv.erase(iter);
	}
	for (auto var : iv)
	{
		cout << var << " ";
	}
	cout << endl;

	return 0;
}