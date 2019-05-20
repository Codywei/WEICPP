#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <list>
using std::cout;
using std::list;
using std::endl;
using std::string;
using std::cin;

int main()
{
	list<string> list1;
	string word;
	while (cin >> word)
	{
		list1.push_back(word);
	}
	int count1 = count(list1.begin(), list1.end(), "haha");
	cout << "The list have \"haha\" is: " << count1 << endl;

	return 0;
}