#include <vector>
#include <iostream>
using namespace std;

// vector 中删除符合条件的元素

int main()
{
    vector<int64_t> obj;
    obj.push_back(40);
    obj.push_back(20);
    obj.push_back(80);
    obj.push_back(1000);
    obj.push_back(5);
    obj.push_back(900);

    // 访问
    // vector<int64_t>::iterator it;
    for(auto it=obj.begin(); it!=obj.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    for(auto it=obj.begin(); it!=obj.end(); it++)
    {
        if (*it > 70 && *it < 100) 
        {
            it = obj.erase(it);
        }else{
            ++it;
        }
    }

    // vector<int64_t>::iterator it;
    for(auto it=obj.begin(); it!=obj.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}

