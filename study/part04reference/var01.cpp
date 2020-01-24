#include<iostream>
using namespace std;

int main()
{
    //int &b = NULL； // 报错，别名不能单独存在
    int a = 0;
    int &b = a;
    b = 10;
    cout << "a=" << a <<endl;

    a = 30;
    cout << "b=" << b <<endl;
    return 0;
}