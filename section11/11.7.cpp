/**
????
*/
#include <iostream>
#include <map>
#include <string>
#include <vector>

using std::string;
using std::map;
using std::vector;

int main(void)
{
    map<string, vector<string>> family;
    family["wei"] = { ("i") };
    family["wei"].push_back("o");
    family["wei"] = { ("e") };

    for (const auto &var : family)
    {
        for (const auto &name : var.second)
        {
            std::cout << var.first << " " << name << std::endl;
        }
    }

    return 0;
}