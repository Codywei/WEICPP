/**
赋值，if条件
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
	//第一条语句因为42不能作左值所以报错
	//第二条语句恒为真
	int i;
	//if (42 = i)
	//{
	//	;
	//}
	if (i = 42)
	{
		;
	}
	return 0;
}