#include<iostream>
using namespace std;

int * func() 
{
    int a = 10;
    return &a;
}

int main()
{
    int *p = func();
    cout << *p << endl;
    cout << *p << endl;
    return 0;
}

/*
varstack.cpp: In function ‘int* func()’:
varstack.cpp:6:9: warning: address of local variable ‘a’ returned [-Wreturn-local-addr]
     int a = 10;
*/