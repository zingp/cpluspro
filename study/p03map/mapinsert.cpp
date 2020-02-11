//数据的插入--第一种：用insert函数插入pair数据  
#include <map>  
#include <string>  
#include <iostream>  
using namespace std;  
  
int main(void)  
{  
  
    map<int, string> mapStudent;  
    mapStudent.insert(pair<int, string>(1, "student_1"));  
    mapStudent.insert(pair<int, string>(3, "student_3"));  
    mapStudent.insert(pair<int, string>(2, "student_2"));  
  
    map<int, string>::iterator iter;  
    for(iter = mapStudent.begin(); iter != mapStudent.end(); iter++)  
       cout<<iter->first<<' '<<iter->second<<endl;  
    return 0;
}  