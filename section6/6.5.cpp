/**
绝对值函数
*/
#include "cody.h"
double my_abs(double val)
{
	return val > 0 ? val : -val;
}
int main()
{
	double num;
	while (cin >> num)
		cout << my_abs(num) << endl;
	
	return 0;
}