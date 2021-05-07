#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> user_age = {
        {"liuyouyuan", 23},
        {"zingp", 25}
    };  //c++11 支持大括号直接初始化

    // 遍历
    map<string, int>::iterator iter;
    for (iter=user_age.begin(); iter!=user_age.end(); iter++) {
        cout << "name=" << iter->first << " | age=" << iter->second << endl; 
    };
    return 0;
}

//g++ -std=c++11 -o mapini mapInit.cpp
