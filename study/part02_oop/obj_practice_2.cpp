#include<iostream>
#include<string>
using namespace std;
/***************************************/
/*定义一个Teacher类，分别采用同文件类外定义
 *和分文件类外定义的方式。要求：
 *数据成员：
 *  名字
 *  年龄
 *  性别
 *成员函数:
 *  数据成员的封装函数
 *  授课teach*/
/***************************************/

class Teacher
{
public:
    void setName(string _name);
    string getName();
    void setAge(int _age);
    int getAge();
    void setGender(string _gender);
    string getGender();
    void teach();

private:
    string m_strName;
    int m_intAge;
    string m_strGender;
};

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

void Teacher::setGender(string _gender)
{
    m_strGender = _gender;
}

string Teacher::getGender()
{
    return m_strGender;
}

void Teacher::teach()
{
    cout << "开始上课了..." << endl;
}

int main()
{
    Teacher t;
    t.setName("老子");
    t.setAge(30);
    t.setGender("男");

    cout << t.getName() << " " << t.getGender() << " " << t.getAge() << endl;
    t.teach();
    return 0;
}
