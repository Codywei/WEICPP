/**
-100到100的加法
*/
#include <iostream>
int main()
{
	int sum = 0;
	for(int i= -100; i <= 100; ++i)
		sum += i;
	std::cout << "Sum: " << sum << std::endl;
	return 0;
}
