/**
 判断注释写法是否正确
*/
#include <iostream>
int main()
{
	std::cout << "/*";
	std::cout << "*/";
	// std::cout << /* "*/" */;
	std::cout << /* "*/" /* "/*" */;
	return 0;
}
