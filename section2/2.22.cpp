/**
通过指针进行判断
*/
#include <iostream>
int main()
{
	int* p;
	if (p);	//判断的是p是否指向0（空指针）
	if (*p);//判断的是p指向的值是否为0
	return 0;
}