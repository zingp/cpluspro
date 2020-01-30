#include<iostream>
using namespace std;

int main()
{
    /* code */
    const int x=3; // 不能改变跟在开头定义#define X 3等价
    int y=5;
    int const *p = &y; //等价于const int *p=&y;
    //*p = 10;报错
    // y = 10;可以

    int *const q = &y; //这时候const修饰的是q,不能改变q,会报错；但是可以修改*q;
    return 0;
}
