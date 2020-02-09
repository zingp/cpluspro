#include<iostream>
using namespace std;

class Solution {
public:
    int uniquePaths(int m, int n) {
        int* *dp = new int*[m]();
        for(int i=0;i<m;i++)
            dp[i] = new int[n]();
        // int[][] dp = new int[m][n];
        for(int x=0;x<m;x++) {
            for (int y=0;y<n;y++) {
                if (x==0 || y==0) {
                    dp[x][y] = 1;
                } else {
                    dp[x][y] = dp[x][y-1] + dp[x-1][y];
                } 
            }
        }
        return dp[m-1][n-1];
    }
};

int main(void)
{
    int m=7, n=3;
    Solution obj;
    cout << obj.uniquePaths(m, n) << endl;
    return 0;
}