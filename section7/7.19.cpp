/**
将数据成员声明为private
将构造函数和函数成员声明为public
*/
#include "Person.h"
using std::cout;
int main()
{
	Person per = Person("cody", "wei", "guangzhou");
	print(cout, per);
	return 0;
}