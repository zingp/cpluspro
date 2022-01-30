#include <iostream>
using namespace std;

// 值传递:  形参不会修饰实参
void mySwap1(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

// 地址传递: 形参修饰实参
void mySwap2(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// 引用传递:  形参修饰实参
void mySwap3(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int a = 10;
    int b = 20;
    mySwap1(a, b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    mySwap2(&a, &b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    mySwap3(a, b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    return 0;
}
// a=10
// b=20
// a=20
// b=10
// a=10
// b=20