/**
 ???????
*/
#include <iostream>
int main()
{
	int i;
	//?????
	const int v2 = 0;
	int v1 = v2;
	int *p1 = &v1, &r1 = v1;
	//p2?????????p3?????
	const int *p2 = &v2, *const p3 = &i, &r2 = v2;
	return 0;
}