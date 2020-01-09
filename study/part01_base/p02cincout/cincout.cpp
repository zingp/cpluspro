#include<iostream>
#include<stdlib.h>
using namespace std;

// 要求：提示用户输入一个整数，将该整数分别以8、10、16进制打印打印到屏幕；
// 要求：提示用户输入一个布尔值，以布尔的方式打印该值到屏幕；

int main(void){
    cout << "请输入一个整数:" << endl;
    int x = 0;
    cin >> x;
    cout << oct << x << endl;
    cout << dec << x << endl;
    cout << hex << x << endl;

    cout << "请输入一个布尔值（0 | 1）" << endl;
    bool y = false;
    cin >> y;
    cout << boolalpha << y << endl;

    system("pwd");   //stdlib.h
    return 0;
}