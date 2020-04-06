/* 
测试c语言风格字符串，这也太麻烦了吧
*/
#include<iostream>
using namespace std;

int main()
{
    char name[10] = {'n', 'a', 'm', 'e', ' ', 'i', 's', ' ', 'L', '\0'};
    cout << name << endl;
    return 0;
}

// 输出结果name is L