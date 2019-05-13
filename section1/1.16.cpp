/**
 读取数量不定的输入数据
*/
#include <iostream>
int main()
{
	int val = 0;
	int sum = 0;
	// 读取数据直到遇到文件尾，计算所有读入的值的和
	while(std::cin >> val){
		sum += val;
	}
	std::cout << "Sum: " << sum << std::endl;
	return 0;
}
