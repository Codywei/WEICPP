/**
指针相加的无意义操作
*/
#include <iostream>
#include <string>
#include <vector>
#include <cctype>//被包含在iostream中
#include <cstddef>//定义数组下标size_t和指针相减ptrdiff_t类型
#include <iterator>//定义库函数begin和end
#include <cstring>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;

// 因为指向一个未知的地址
int main()
{
	int i = 10, j = 10;
	int *p = &i, *p2 = &j;

	//相减可以求个相对地址，相加的话含有两个基地址的长度，会指向未知的位置
	//cout << *(p + p2) << endl;
	return 0;
}