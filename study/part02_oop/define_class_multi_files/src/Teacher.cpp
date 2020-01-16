#include<Teacher.h>
#include<string>
#include<iostream>
using namespace std;

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