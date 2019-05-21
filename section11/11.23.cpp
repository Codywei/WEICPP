/**
??????
*/
#include <iostream>
#include <map>
#include <string>
#include <vector>

using std::string;
using std::multimap;
using std::vector;

int main(void)
{
    multimap<string, string> family;
    family.insert({ "wei", "i" });
    family.insert({ "wei", "i½" });
    family.insert({ "wei", "o" });

    for (const auto &var : family)
    {
        std::cout << var.first << " " << var.second << std::endl;
    }
    return 0;
}