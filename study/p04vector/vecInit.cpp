#include<iostream>
#include<vector>
using namespace std;

/*
* vector的各种构造函数和初始化
*/

int main() 
{
    // [1] vector<类型>标识符
    vector<int> obj1;
    // push_back 添加值
    for (int i=0; i<=3; i++){
        obj1.push_back(i);
    }
    cout << obj1[2] << endl;
    cout << "-----------"<< endl;

    // [2] vector<类型>标识符(最大容量)
    // 实际上最大容量是可以扩充的
    vector<int>obj2(6);
    // push_back 添加值
    for (int i=0; i<=10; i++){
        obj2.push_back(i);
    }
    for (int i=0; i<obj2.size(); i++){
        cout << obj2.at(i) << ",";
    }
    cout<< endl;
    cout << "-----------"<< endl;

    // [3] vector<类型>标识符(最大容量, 初始所有值)
    cout << "[3] vector<类型>标识符(最大容量,初始所有值)" << endl;
    vector<int> obj3(5, 2);
    for(int i=0;i<obj3.size();i++){
        cout << obj3[i] << ",";
    }
    cout << endl;
    cout << "-----------" << endl;

    // [4] vector<类型>标识符(a, a+4); 数组a的前4个元素初始化
    int a[4] = {1,2,3,4};
    vector<int> obj4(a, a+4);  //数组的前4个元素初始化
    for (int i=0; i<obj4.size();i++){
        cout << obj4.at(i) << ",";
    }
    cout << endl;
    // [5] vector<vector<int> >obj5; 二维向量//这里最外的<>要有空格,否则在比较旧的编译器下无法通过。
    cout << "[5] vector<vector<int> >obj5; 构造二维向量，略" << endl;
    return 0;
}