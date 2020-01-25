#include<iostream>
using namespace std;

// 函数引用
void func(int &a, int &b)
{
    int tmp = 0;
    tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int x = 10;
    int y = 20;
    cout << "x=" << x << " ";
    cout << "y=" << y << endl;

    func(x, y);
    cout << "x=" << x << " ";
    cout << "y=" << y << endl;
    return 0;
}