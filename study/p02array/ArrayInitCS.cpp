#include <iostream>

int main()
{
    using namespace std;
    int cards[4] = {7, 1, 3, 9};  // ok
    long hand[4];       //ok

    float tips[5] = {2.5, 3.2};   // 初始化时小于申明的个数
    float totals[20] = {0};       // 全部初始化

    short things[] = {1,3,5,8};   // 编译器自己计算元素个数

    cout << "cards=" << cards[0] << endl;
    cout << "hand=" << hand[1] << endl;
    cout << "tips=" << tips[1] << endl;
    cout << "totals=" << totals[15] << endl;
    cout << "things=" << things[3] << endl;

    return 0;
}