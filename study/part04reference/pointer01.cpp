#include<iostream>
using namespace std;


int main()
{
    // *就是取值； &就是取地址
    int a = 1;
    cout << &a <<endl;
    int *p = &a;
    int *&q = p;


    *q = 10;
    cout << p <<" "<< *p << endl;
    cout << q << endl;
    cout << &q << endl;
    cout << *&q << endl;

    cout << "a=" << a << endl;
    cout << "p=" << *p << endl;
    return 0;
}