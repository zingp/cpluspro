#include <iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        double ans = 1;
        double current_product = x;
        for (long long i = N; i ; i /= 2) {
            if ((i % 2) == 1) {
                ans = ans * current_product;
            }
            current_product = current_product * current_product;
        }
        return ans;
    }
};

int main()
{
    // 输入: 2.10000, 3
    // 输出: 9.26100
    double x = 2.10000;
    int n = 3;
    double res;

    Solution obj;

    res = obj.myPow(x, n);
    cout << res << endl;
    return 0;
}


