/**
constexpr
*/
#include <string>
using std::string;

//���ܸĳ�constexpr����Ϊ�ββ�������ֵ����(�������ͣ����ã�ָ��)

inline bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

int main()
{
	return 0;
}