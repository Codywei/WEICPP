/**
 用for循环代替while循环
*/
#include <iostream>
int main()
{
	int sum = 0;
	for(int i = 50; i <= 100; i++)
	{
		sum += i;
	}
	std::cout << "Sum of 50 to 100 inclusive is "
			  << sum << std::endl;
	return 0;
}
