#include <iostream>
int main()
{
    using namespace std;
    int nights = 1001;
    int * pt = new int;
    *pt = 1001;
    
    cout << "nights values=";
    cout << nights << endl;
    cout << &nights << endl;
    cout << *pt << endl;
    cout << pt << endl;
    return 0;
}