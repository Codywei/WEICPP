/**
accumulate����
*/
#include <iostream>
#include <vector>
#include <numeric>
using std::vector;
using std::accumulate;
using std::cout;
using std::endl;

// ���������������0������int��+�ţ����ҷ���ֵ��int�����Իᶪʧ����
int main()
{
	vector<double> veci{ 1.1,2.2,3.3,4.4,5.5 };
	double countVeci = accumulate(veci.begin(), veci.end(), 0.0);

	cout << countVeci << endl;
	return 0;
}