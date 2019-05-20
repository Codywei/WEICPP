/**
反向迭代器
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> ivec{ 1, 2, 3, 4, 5 };
	for (vector<int>::reverse_iterator iter = ivec.rbegin(); iter != ivec.rend(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;
	return 0;
}