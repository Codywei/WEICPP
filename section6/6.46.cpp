/**
constexpr
*/
#include <string>
using std::string;

//不能改成constexpr：因为形参不是字面值类型(算数类型，引用，指针)

inline bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

int main()
{
	return 0;
}