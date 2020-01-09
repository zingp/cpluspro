#include <iostream>
using namespace std;

namespace A 
{
    int nx = 10;
    void func() 
    {
        cout << "funcA" << endl;
    }
}

namespace B 
{
    int nx = 1000;
    void func() 
    {
        cout << "funcB" << endl;
    }
}

using namespace A;
using namespace B;

int main()
{
    int x = 20;
    cout << x << endl;   // 如果没有加using namespace std 直接用cout会报错

    cout << A::nx << endl;
    B::func();
    return 0;
}
