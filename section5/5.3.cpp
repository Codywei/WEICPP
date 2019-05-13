#include <iostream>
#include <string>
#include <vector>
#include <cctype>//被包含在iostream中
#include <cstddef>//定义数组下标size_t和指针相减ptrdiff_t类型
#include <iterator>//定义库函数begin和end
#include <cstring>
using std::cout;
/**
块的代码可读性
*/
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;

int main()
{
	/*int sum = 0, val = 1;
	while (val <= 10) {
		sum += val;
		++val;
	}
	cout << "Sum of 1 to 10 inclusive is " << sum << endl;*/

	// 可读性降低了...
	int sum = 0, val = 1;
	while (val <= 10)
		sum += val,++val;
	cout << "Sum of 1 to 10 inclusive is " << sum << endl;
	return 0;
}