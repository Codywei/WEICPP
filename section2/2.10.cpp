#include <iostream>
#include <string>

// ��ʼֵΪ�մ�
std::string global_str;

// ��ʼֵΪ0
int global_int;	


int main()
{   
	// δ����ʼ����ֵδ���壬���ʻ����
	int local_int;	
	
	// ��ʼֵΪ�մ�
	std::string local_str;

	std::cout << global_str << local_str << global_int << "\t" << std::endl;
	
	return 0;
}