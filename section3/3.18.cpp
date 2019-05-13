/**
vector不能以下标的形式添加元素
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
	// illegal
	/*vector<int> ivec;
	ivec[0] = 42;*/

	// fix
	vector<int> ivec;
	ivec.push_back(42);

	return 0;
}