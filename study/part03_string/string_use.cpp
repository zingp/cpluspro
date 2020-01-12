/*****************************************************/
/*描述：
    1.提示用户输入姓名
    2.接受用户的输入
    3.然后向用户问好：hello xxx
    4.告诉用户名字的长度
    5.告诉用户名的首字母
    6.如果用户直接输入回车,告诉用户输入为空
    7.如果用户输入root，告诉用户的角色是管理员*/
/*****************************************************/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name;
    cout << "Please input your name:" << endl;
    getline(cin, name);   // 将用户的输入赋值给name

    if (name.empty()) 
    {
        cout << "Your input is empty!" << endl;
        return 0;
    }
    cout << "Hello " + name << endl;
    cout << "Your name first char is: " << name[0] << endl;
    cout << "Your name length is:" << name.size() << endl;
    
    if (name == "root")
    {
        cout << "You are the administrator!" << endl;
    }
}