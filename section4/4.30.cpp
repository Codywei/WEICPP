/**
sizeof
*/
#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <cctype>
#include <cstddef>
#include <iterator>

using std::cin;
using std::endl;
using std::cout;
using std::string;
using std::vector;
using std::begin;
using std::end;

int f(){
	return 0;
}
struct p1{
	int mem[10];
};
int main()
{
	//a.
	//sizeof x + y;
	int x,y;
	(sizeof x) + y;


	//b.
	//sizeof p->mem[i];
    p1 *p;
	sizeof(p->mem[5]);

	//c.
	//sizeof a < b;
	int a,b;
	(sizeof a) < b;

	//d.
	//sizeof f();
	sizeof(f());
	return 0;
}