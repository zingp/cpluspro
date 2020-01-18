#include <iostream>
#include <string>
#include "Teacher.h" 
using namespace std;
/***************************************/
/*定义一个Teacher类
 *  定义一个无参构造函数
 *  定义一个有参构造函数
 *数据成员：
 *  名字
 *  年龄
 *  性别
 *成员函数:
 *  数据成员的封装函数*/
/***************************************/

int main()
{
    Teacher t1;
    Teacher t2("James", 35);

    cout << t1.getName() << " " << t1.getAge() << endl;
    cout << t2.getName() << " " << t2.getAge() << endl;
    return 0;
}