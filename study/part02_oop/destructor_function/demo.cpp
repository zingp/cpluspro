#include<iostream>
#include<string>
using namespace std;
/***************************************/
/*定义一个Teacher类
 *  自定义析构函数
 *  普通方式实例化的对象，在销毁对象时，是否自动调用析构函数
 *  通过拷贝构造函数实例化对象，在销毁对象时，是否自动调用析构函数？
 *数据成员：
 *  名字
 *  年龄
 *成员函数:
 *  数据成员的封装函数*/
/***************************************/

class Teacher
{
public:
    // Teacher(); // 无参构造函数
    Teacher(string name="zingp", int age=25);

    ~Teacher();  

    void setName(string _name);
    string getName();
    
    void setAge(int _age);
    int getAge();
    int getMax();

private:
    string m_strName;
    int m_intAge;
};

// Teacher::Teacher()
// {
//     cout << "Teacher()" << endl;
// }

Teacher::Teacher(string name, int age):m_strName(name),m_intAge(age)
{
    cout << "Teacher init success." << endl;
}

Teacher::~Teacher()
{
    cout << "~Teacher()" << endl;
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


int main()
{
    Teacher t1;

    Teacher *p = new Teacher();
    cout << "----" << endl;
    delete p;

    Teacher t2(t1);

    return 0;
}