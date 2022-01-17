#include<iostream>
using namespace std;
/*
  ○ 代码区：存放函数体的二进制代码，由操作系統进行管理的
  ○ 全局区：存放全局变量和静态变量以及常量
  ○ 栈区：由编译器自动分配释放，存放函数的参数值，局部变量等
  ○ 堆区：由程序员分配和释放，若程序员不释放，程序结束时由操作系统回收
*/
int g_a = 10;
int g_b = 10;

const int c_g_a = 10;
const int c_g_b = 10;

int main()
{
    int a = 10;
    int b = 10;
    cout << "局部变量a地址：" << (long)&a << endl;
    cout << "局部变量b地址：" << (long)&b << endl;

    static int s_a = 10;
    static int s_b = 10;
    cout << "局部静态变量s_a地址：" << (long)&s_a << endl;
    cout << "局部静态变量s_b地址：" << (long)&s_b << endl;


    cout << "全局变量g_a地址：" << (long)&g_a << endl;
    cout << "全局变量g_b地址：" << (long)&g_b << endl;

    cout << "字符串常量地址：" << (long)&"Hello World!" << endl;

    cout << "全局常量c_g_a地址：" << (long)&c_g_a << endl;
    cout << "全局常量c_g_b地址：" << (long)&c_g_b << endl;

    const int c_l_a = 10;
    const int c_l_b = 10;

    cout << "局布常量c_g_a地址：" << (long)&c_l_a << endl;
    cout << "局布常量c_g_b地址：" << (long)&c_l_b << endl;

    return 0;
}

// 局部变量a地址：140724578156444
// 局部变量b地址：140724578156440
// 局部静态变量s_a地址：94237420691544
// 局部静态变量s_b地址：94237420691548
// 全局变量g_a地址：94237420691536
// 全局变量g_b地址：94237420691540
// 字符串常量地址：94237418589657
// 全局常量c_g_a地址：94237418589484
// 全局常量c_g_b地址：94237418589488
// 局布常量c_g_a地址：140724578156436
// 局布常量c_g_b地址：140724578156432