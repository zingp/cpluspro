#include<iostream>
using namespace std;


int main()
{
    int a = 1;
    int *p = &a;
    int *&q = p;

    *q = 10;

    cout << "a=" << a << endl;
    cout << "p=" << *p << endl;
    return 0;
}