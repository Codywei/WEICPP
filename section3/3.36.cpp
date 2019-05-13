/**
比较数组以及vector是否相等
*/
#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <cstddef>
#include <iterator>
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;
using std::begin;
using std::end;

int main()
{
	int arr[3] = { 1,2,3 };
	int arr2[3] = { 1,5,6 };
	if ((end(arr) - begin(arr)) == (end(arr) - begin(arr)))
	{
		for (int *p = begin(arr), *p2 = begin(arr2); p != end(arr);)
		{
			if (*p++ != *p2++)
			{
				cout << "arr!=arr2" << endl;
				break;
			}
		}
	}
	else
		cout << "arr!=arr2" << endl;

    


	vector<int> vec1={1,2,3};
	vector<int> vec2={1,2,3};
	auto begin1=vec1.begin();
	auto end1=vec1.end();
	auto begin2=vec2.begin();
	auto end2=vec2.end();
	bool equal=true;
	if((end1-begin1)==(end2-begin2)){
		for(auto p1=begin1,p2=begin2;p1!=end1;){
			if(*p1++!=*p2++){
				cout<<"not equal"<<endl;
				equal=false;
				break;
			}
		}
		if(equal==true){	
		   cout<<"equal"<<endl;
		}
	}else{
		cout<<"not equal"<<endl;
	}
	return 0;

}