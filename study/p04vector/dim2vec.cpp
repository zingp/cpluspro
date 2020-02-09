#include<vector>
#include<iostream>
using namespace std;

/*
二维数组两种定义方法：
    以 “定义一个4行5列的二维数组”为例
vector<vector<int> >obj; 
这里最外的<>要有空格，否则在比较旧的编译器下无法通过。
*/
int main(void)
{
    int N=4, M=5;
    //[1] 方法一
    cout << "[1] 方法一：" << endl;
    vector<vector<int> >vec2dim(N); // 定义二维动态数组大小N行
    for (int i=0; i<vec2dim.size(); i++) {
        vec2dim[i].resize(M); //动态二维数组为N行M列，值全为0
    }

    // 输出
    for (int i=0; i<vec2dim.size(); i++) {
        for (int j=0; j<vec2dim[i].size(); j++) {
            cout << vec2dim[i][j] << " ";
        }
        cout << "\n";
    }

    //[1] 方法二
    cout << "[1] 方法二：" << endl;
    vector<vector<int> >vec2dim2(N, vector<int>(M)); //定义二维动态数组N行M列
    // 输出
    for (int i=0; i<vec2dim2.size(); i++) {
        for (int j=0; j<vec2dim2[i].size(); j++) {
            cout << vec2dim2[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
