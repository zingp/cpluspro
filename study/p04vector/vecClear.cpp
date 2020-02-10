#include <vector>
#include <iostream>
using namespace std;
 
 /*vector的clear()清除容易所有数据*/
int main()
{
    vector<int>obj;
    for(int i=0;i<10;i++) //push_back(elem)在数组最后添加数据 
    {
        obj.push_back(i);
        cout << obj[i] << ",";
    }
    cout << endl;

    obj.clear(); // 清除容器中所有数据
    for(int i=0;i<obj.size();i++)
    {
        cout << obj[i] << endl;
    }
    cout << "end" << "\n";

    return 0;
}