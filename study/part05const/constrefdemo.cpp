#include<iostream>
using namespace std;


void mod(const int &a, const int &b)
{
    //a = 10; 这样是不行的，不能修改常亮
    //b = 20;
}

int main()
{
    /* code */
    int x=3;
    const int &y=x; // y不能赋值修改，但是x能
    x = 10;

    cout << y << endl; // 10
    return 0;
}
