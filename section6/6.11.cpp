/**
重置数（用引用作为参数不需要判断是否为空）
*/
#include "cody.h"
void reset(int &num)
{
	num = 0;
}
int main()
{
	int num;
	cin >> num;
	reset(num);
	cout << num << endl;
	return 0;
}