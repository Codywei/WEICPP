/**
decltype���ر��ʽ�����Ӧ������
*/
#include <iostream>
int main()
{
	//���������ͣ�ֵ
	//a    int   4
	//b    int   4
	//c    int   4
	//d    int&  4
	int a = 3, b = 4;
	decltype(a) c = a;
	//˫�����Ŵ�������
	decltype((b)) d = a;
	++c;
	++d;
	std::cout << a << " " << b << " " << c << " " << d << std::endl;
     
	return 0;
}