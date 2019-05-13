/**
常量引用可以传递字面量
*/
#include <iostream>
#include <string>
#include <vector>
#include <cctype>//被包含在iostream中
#include <cstddef>//定义数组下标size_t和指针相减ptrdiff_t类型
#include <iterator>//定义库函数begin和end
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

// 因为形参不是常量引用，所以不能给函数传递字符串字面值，const对象，需要转换的类型传给它
//bool is_empty(string &s) { return s.empty(); }
// 改善
bool is_empty(const string &s) { return s.empty(); }
int main()
{
	return 0;
}