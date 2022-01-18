#include<iostream>
using namespace std;


int main()
{
    int *a = new int(10);
    cout << *a << endl;
    delete a;

    int *arr = new int[10];
    for(int i = 0; i < 10; i++) {
        arr[i] = i;
    }
    cout << arr[6] << endl;

    delete[] arr;
    return 0;
}
// 10
// 6