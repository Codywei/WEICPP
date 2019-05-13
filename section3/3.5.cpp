/**
string相加
*/
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
	/*string str, strAll;
	while (getline(cin, str))
	{
		strAll += str;
	}
	cout << strAll;*/
    
	//string s="hello"+",";  //不能把字面值直接相加

	string str, strAll;
	getline(cin, str);
	strAll = str;
	while (getline(cin, str))
	{
		strAll = strAll + " " + str;
	}
	cout << strAll << endl;
	return 0;
}