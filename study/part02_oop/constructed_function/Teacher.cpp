#include "Teacher.h" 
#include <iostream>
#include <string>
using namespace std;

// 实现无参构造函数
Teacher::Teacher()
{
    m_strName = "zingp";
    m_intAge = 23;
    cout << "Teacher()" << endl;
}

Teacher::Teacher(string name, int age)
{
    m_strName = name;
    m_intAge = age;
    cout << "Teacher(string name, int age=25)" << endl;
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