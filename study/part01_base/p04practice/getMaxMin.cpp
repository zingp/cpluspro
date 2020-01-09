#include<iostream>
using namespace std;

int getMaxOrMin(int *arr, int count, bool isMax)
{
    int tmp = arr[0];
    if (isMax)
    {
        for (int i=1; i<count; i++)
        {
            if (tmp < arr[i])
            {
                tmp = arr[i];
            }
        }
    }
    else
    {
        for (int i=1; i<count; i++)
        {
            if (tmp > arr[i])
            {
                tmp = arr[i];
            }
        }
    }

    return tmp;
}

int main(void)
{
    int arr[5] = {1, 7, 4, 9, 5};
    bool isMax = false;
    cin >> isMax;
    // 为什么传参数不需要传地址？
    cout << getMaxOrMin(arr, 5, isMax) << endl;
    return 0;
}