/**
前置递增运算符
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

//前置递增运算符，取不到第一个元素，还会去取矢量最后一个元素的后一个不存在的元素
int main()
{   
    vector<int> v={1,2,3,4};
	auto pbeg = v.begin();
	// 输出元素直至遇到第一个负值为止
	while (pbeg != v.end() && *pbeg >= 0)
		cout << *++pbeg << endl;//输出
	return 0;
}