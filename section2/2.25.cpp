/**
ָ���ָ��
*/
#include <iostream>
int main()
{
	int *ip, i, &r = i;	//a. ip��ָ��int���͵�ָ�룬i��int������r��int���͵�����
						// ip��i��ֵΪ�����r��i
	int m, *ip1 = 0;		//b. m��int������ip1��ָ��int���͵�ָ��
						// i��ֵΪ�����ip��ֵΪ0��ipû��ָ���κζ���
	int *ip2, ip3;		//c.ip2Ϊָ��int���͵�ָ�룬ip3Ϊint����
						// ���ǵ�ֵ����ȷ��
	return 0;
}