#include <iostream>
using namespace std;

// 不要返回局部变量引用
int &func1()
{
    int a = 10; // 栈区
    return a;
}

// 函数调用作为左值
int &func2()
{
    static int a = 10; // 全局区
    return a;
}
int main()
{
    // 编译警告：warning: reference to local variable ‘a’ returned [-Wreturn-local-addr]
    // 运行core dumped
    // int &ref = func1();
    // cout << "ref=" << ref << endl;

    int &ref2 = func2();
    cout << "ref2=" << ref2 << endl;
    cout << "ref2=" << ref2 << endl;

    func2() = 999;
    cout << "ref2=" << ref2 << endl;
    return 0;
}
/*
ref2=10
ref2=10
ref2=999
*/
