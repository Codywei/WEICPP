/**
vector类型
*/
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
	//a. 合法
	vector<vector<int>> ivec;
	//b. 不合法，类型不匹配
	//vector<string> svec = ivec;
	//c. 合法，svec有十个元素，每个元素都是“null”
	vector<string> svec(10, "null");
	return 0;
}