#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int uniquePathsWithObstacles(vector< vector<int> >& obstacleGrid) {
        int m = obstacleGrid.size();
        if(m == 0) return 0;
        if(obstacleGrid[0][0] == 1) return 0;
        int n = obstacleGrid[0].size();

        int* *dp = new int*[m]();
        for(int i=0;i<m;i++)
            dp[i] = new int[n]();
        // int [] []dp = new int[m][n];
        for (int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if (obstacleGrid[i][j]==1)
                {
                    dp[i][j] = 0;
                }
                else if (i==0 ||j==0)
                {
                    dp[i][j] = 1;
                }
                else
                {
                    dp[i][j] = dp[i][j-1] + dp[i-1][j];
                }
            }
        }
        return dp[m-1][n-1];
    }
};


int main(void)
{
    vector< vector<int> > v2d;
    int a[9] = {0, 0, 0, 0,1,0, 0,0,0};
    vector<int> v1(a, a+3);
    vector<int> v2(a+3,a+6);
    vector<int> v3(a+6,a+9);
    v2d.push_back(v1);
    v2d.push_back(v2);
    v2d.push_back(v3);

    Solution obj;
    cout << obj.uniquePathsWithObstacles(v2d) << endl;
    return 0;
}