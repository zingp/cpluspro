#include<iostream>
using namespace std;

int main() {
    int num1 = 5;
    int num2 = 2;

    double num3 = num1 / num2;

    cout << num3 << endl;
    // 强制类型转换
    double num4 = (double) num1 / num2;
    cout << num4 << endl;
    return 0;
}