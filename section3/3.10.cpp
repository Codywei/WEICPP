/**
for循环改变字符串中的字符
*/
#include <iostream>
#include <string>
#include <cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
	string s;
	cout << "Enter a string: ";
	cin >> s;
	//这里是用引用
	for(char &i:s)
	{
		if (ispunct(i))
			i=' ';
	}
	cout << s << endl;
	return 0;
}