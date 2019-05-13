/**
vector迭代器实现二分查找
*/
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


int main()
{
	int sought = 4;
    vector<int> text={1,2,3,4,5,6};
	auto beg = text.begin(), end = text.end();
	auto mid = text.begin() + (end - beg) / 2; // original midpoint
    //auto mid = beg+text.size()/2; // original midpoint

	// while there are still elements to look at and we haven't yet found sought
	while (mid != end&*mid != sought) {
		if (sought < *mid){	// is the element we want in the first half?
			end = mid;
			}		// if so, adjust the range to ignore the second half
		else{				// the element we want is in the second half
			beg = mid + 1;
			}	// start looking with the element just after mid
		mid = beg + (end - beg) / 2;	// new midpoint
	}
	cout<<*mid<<endl;
	return 0;
}