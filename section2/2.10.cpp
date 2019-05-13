#include <iostream>
#include <string>

// 初始值为空串
std::string global_str;

// 初始值为0
int global_int;	


int main()
{   
	// 未被初始化，值未定义，访问会出错
	int local_int;	
	
	// 初始值为空串
	std::string local_str;

	std::cout << global_str << local_str << global_int << "\t" << std::endl;
	
	return 0;
}