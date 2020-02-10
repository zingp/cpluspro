#include <vector>
#include <iostream>
using namespace std;

/* vector 的排序 */
 
int main()
{
    vector<int>obj;
    for(int i=10; i>5; i--) {
        obj.push_back(i);
    }
    obj.push_back(12);
    obj.push_back(2);
    obj.push_back(16);
    cout << "排序前：" << endl;
    for(int i=0; i<obj.size(); i++) {
        cout << obj[i] << ",";
    }
    cout << endl;

    sort(obj.begin(), obj.end());
    cout << "从小到大排序后：" << endl;
    for(int i=0; i<obj.size(); i++) {
        cout << obj[i] << ",";
    }
    cout << endl;

    reverse(obj.begin(), obj.end());
    cout << "从大到小排序后：" << endl;
    for(int i=0; i<obj.size(); i++) {
        cout << obj[i] << ",";
    }
    cout << endl;

    return 0;
}