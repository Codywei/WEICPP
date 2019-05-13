/**
赋值运算符
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

int main()
{
	//a. 如果ptr不为空指针，就解引用，并让ptr指向下一个
	//ptr!=0&&*ptr++;

	//b. 先将ival和递增1后的ival求与
	//ival++&&ival;

	//c. 出错，可能先求<=左边的值，也可能先求<=右边的值
	//vec[ival++]<=vec[ival];

	//修改
	/*
	int tmp = ival + 1;
	vec[ival] <= vec[tmp];
	*/

	return 0;
}