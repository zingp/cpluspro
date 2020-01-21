#include<string>
#include <iostream>
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
 *  数据成员的封装函数
 * 扩展：
 *  定义一个常量最多带学生数*/
/***************************************/

class Teacher
{
public:
    Teacher(); // 无参构造函数
    Teacher(string name="zingp", int age=25, int m=20);  

    void setName(string _name);
    string getName();
    
    void setAge(int _age);
    int getAge();
    int getMax();

private:
    string m_strName;
    int m_intAge;
    const int m_iMax;
};


Teacher::Teacher(string name, int age, int m):m_strName(name),m_intAge(age),m_iMax(m)
{
    cout << "Teacher init success." << endl;
}

void Teacher::setName(string _name)
{
    m_strName = _name;
}

string Teacher::getName()
{
    return m_strName;
}

void Teacher::setAge(int _age)
{
    m_intAge = _age;
}
 
int Teacher::getAge()
{
    return m_intAge;
}

int Teacher::getMax()
{
    return m_iMax;
}


int main()
{
    Teacher t1("James", 35, 150);

    cout << t1.getName() << " " << t1.getAge() << " " << t1.getMax() << endl;
    return 0;
}