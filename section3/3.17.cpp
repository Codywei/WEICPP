/**
vector元素初始化
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
    string s;
    vector<string> v;
    while(cin>>s){
       v.push_back(s);
    }

    for(int i=0;i<v.size();++i){
      for(int j=0;j<v[i].size();j++){
          v[i][j]=toupper(v[i][j]);
      }
        cout<<v[i]<<endl;
    }
    return 0;
}