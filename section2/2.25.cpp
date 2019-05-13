/**
指针的指向
*/
#include <iostream>
int main()
{
	int *ip, i, &r = i;	//a. ip是指向int类型的指针，i是int变量，r是int类型的引用
						// ip和i的值为随机，r绑定i
	int m, *ip1 = 0;		//b. m是int变量，ip1是指向int类型的指针
						// i的值为随机，ip的值为0（ip没有指向任何对象）
	int *ip2, ip3;		//c.ip2为指向int类型的指针，ip3为int变量
						// 它们的值都不确定
	return 0;
}