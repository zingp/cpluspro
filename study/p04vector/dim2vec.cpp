#include<vector>
#include<iostream>
using namespace std;

/*
二维数组两种定义方法：
方法一： 先定义一个N行的vector 每一个元素为vector；然后遍历将每个vector元素resize为包含M个元素；
方法二：
    直接定义：vector<vector<int> >dp(N, vector<int>(M, 0)); 初始化为0;
    这里最外的 >要有空格，否则在比较旧的编译器下无法通过。
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
