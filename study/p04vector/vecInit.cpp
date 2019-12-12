#include<iostream>
#include<vector>
using namespace std;

int main() 
{
    int a[4] = {1,2,3,4};
    vector<int> vec(4);
    for (int i=0;i<(sizeof(a) / sizeof(a[0])); i++) {
        vec.push_back(a[i]);  //  这个只能添加啊
    }

    for (int i=0; i<vec.size();i++){
        cout << vec.at(i) << endl;
    }
    
    cout << "-----------"<< endl;

    vector<int> vec2(a, a+4);  //数组的前4个元素初始化
    for (int i=0; i<vec2.size();i++){
        cout << vec2.at(i) << endl;
    }

    return 0;
}