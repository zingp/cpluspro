#include<iostream>
#include<vector>
using namespace std;

/*
算法

如果第一个格点 obstacleGrid[0,0] 是 1，说明有障碍物，那么机器人不能做任何移动，我们返回结果 0。
否则，如果 obstacleGrid[0,0] 是 0，我们初始化这个值为 1 然后继续算法。
遍历第一行，如果有一个格点初始值为 1 ，说明当前节点有障碍物，没有路径可以通过，设值为 0 ；否则设这个值是前一个节点的值 obstacleGrid[i,j] = obstacleGrid[i,j-1]。
遍历第一列，如果有一个格点初始值为 1 ，说明当前节点有障碍物，没有路径可以通过，设值为 0 ；否则设这个值是前一个节点的值 obstacleGrid[i,j] = obstacleGrid[i-1,j]。
现在，从 obstacleGrid[1,1] 开始遍历整个数组，如果某个格点初始不包含任何障碍物，就把值赋为上方和左侧两个格点方案数之和 obstacleGrid[i,j] = obstacleGrid[i-1,j] + obstacleGrid[i,j-1]。
如果这个点有障碍物，设值为 0 ，这可以保证不会对后面的路径产生贡献。

复杂度
时间复杂度 ： O(M×N) 。长方形网格的大小是M×N，而访问每个格点恰好一次。
可以使用滚动数组的方法降低空间复杂度到O(n)，代码中没有体现

链接：https://leetcode-cn.com/problems/unique-paths-ii/solution/bu-tong-lu-jing-ii-by-leetcode/
*/

//

class Solution {
public:
    int uniquePathsWithObstacles(vector< vector<int> >& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

        if(m == 0) return 0;
        if(obstacleGrid[0][0] == 1) return 0;
        //结果可能很大
        vector< vector<unsigned long long> > dp(m, vector<unsigned long long>(n, 0));

        dp[0][0] = 1;

        for (int i = 1; i < m; i++) {
            dp[i][0] = obstacleGrid[i][0] ? 0 : dp[i-1][0];
        }

        for (int j = 1; j < n; j++) {
            dp[0][j] = obstacleGrid[0][j] ? 0 : dp[0][j-1];
        }

        for (int i=1;i<m;i++) {
            for(int j=1;j<n;j++) {
                if (obstacleGrid[i][j]==1) {
                    dp[i][j] = 0;
                } else {
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