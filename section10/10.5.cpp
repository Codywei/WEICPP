/**
equal函数
*/
#include <iostream>
#include <vector>
#include <numeric>
using std::vector;
using std::cout;
using std::endl;
using std::equal;
using std::string;

/*
如果两个roster都是保存的char*那么会调用c风格字符串的==运算符
*/
int main()
{
	vector<const char *> rester1{ "111","222","333" };
	vector<const char *> rester2{ "111","222","333" };
	cout << equal(rester1.cbegin(), rester1.cend(), rester2.cbegin()) << endl;

	char arr1[][4] = { "111","222","333" };
	char arr2[][4] = { "111","222","333" };
	vector<const char*> v1(std::begin(arr1), std::end(arr1));
	vector<const char*> v2(std::begin(arr2), std::end(arr2));
	cout << equal(std::begin(arr1), std::end(arr1), std::begin(arr2)) << endl;
	cout << equal(v1.cbegin(), v1.cend(), v2.cbegin()) << endl;
	return 0;
}