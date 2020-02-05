#include<iostream>
#include<vector>
using namespace std;
/*
fib 
0 1 1 2 3 5 8 13 21 34 ...
*/

// O(2^n)
int fib(int n)
{
    return (n<=1) ? n: fib(n-1) + fib(n-2);
}

// 递归加上记忆化 时间复杂度O(n); 空间复杂度O(n)
int fib2(int n, int *mem)
{
    if (n<=1)
    {
        return n;
    }
    else if(!mem[n])
    {
        mem[n] = fib2(n-1, mem) + fib2(n-2, mem);
    }
    return mem[n];
}

// 递推：时间复杂度O(n); 空间复杂度O(n)
int fib3(int n)
{
    if (n<=1) return n;
    
    vector<int>mem(n+1);
    mem[0] = 0;
    mem[1] = 1;
    for (int i=2;i<n+1;i++)
    {
        mem[i] = mem[i-1] + mem[i-2];
    }
    return mem[n];
}

// 递推：时间复杂度O(n); 空间复杂度O(1)
int fib4(int n)
{   
    if (n<=1) return n;
    
    int f1=0, f2=1;
    for (int i=2;i<n+1;i++)
    {
        f2 += f1;
        f1 = f2 - f1;
    }
    return f2;
}


int main(void)
{
    int n = 0;
    cout << "请输入一个大于0的数字：";
    cin >> n;
    cout << fib(n) << endl;

    int *memery = new int[n+1]();  // 初始化为0
    cout << fib2(n, memery) << endl;
    delete []memery;
    memery = NULL;

    cout << fib3(n) << endl;

    cout << fib4(n) << endl;

    return 0;
}