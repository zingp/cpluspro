/*
72 编辑距离
给你两个单词 word1 和 word2，请你计算出将 word1 转换成 word2 所使用的最少操作数 。
你可以对一个单词进行如下三种操作：
    插入一个字符
    删除一个字符
    替换一个字符
 
示例 1：
输入：word1 = "horse", word2 = "ros"
输出：3
解释：
    horse -> rorse (将 'h' 替换为 'r')
    rorse -> rose (删除 'r')
    rose -> ros (删除 'e')

示例 2：
输入：word1 = "intention", word2 = "execution"
输出：5
解释：
    intention -> inention (删除 't')
    inention -> enention (将 'i' 替换为 'e')
    enention -> exention (将 'n' 替换为 'x')
    exention -> exection (将 'n' 替换为 'c')
    exection -> execution (插入 'u')

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/edit-distance
*/

/*
解法：
这到题目很经典，用DP
dp数组的定义很关键
dp[i][j] 代表 word1 到 i 位置转换成 word2 到 j 位置需要最少步数
或者说，dp[i][j] 代表 word1前i个字母 到 word2前j个字母之间的编辑距离。

*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();
        vector<vector<int> > dp(m+1, vector<int>(n+1, 0));
        for (int j = 1; j < n + 1; j++) {
            dp[0][j] = j;
        }
        for (int i = 1; i < m + 1; i++) {
            dp[i][0] = i;
        }
        for (int i = 1; i < m + 1; i++) {
            for (int j = 1; j <= n; j++) {
                if (word1[i-1] == word2[j-1])
                {
                    dp[i][j] = dp[i-1][j-1];
                }
                else
                {
                    dp[i][j] = 1 + min(min(dp[i][j-1], dp[i-1][j]), dp[i-1][j-1]);
                }
            }
        }
        return dp[m][n];
    }

    int minDistance2(string word1, string word2) {
        int m = word1.length();
        int n = word2.length();
        // 有任一字符串为空串
        if (m * n == 0) return m + n;

        int DP[m+1][n+1];
        for (int i = 0; i < m + 1; i++) {
            DP[i][0] = i;
        }
        for (int j = 0; j < n + 1; j++) {
            DP[0][j] = j;
        }
        for (int i = 1; i < m + 1; i++) {
            for (int j = 1; j < n + 1; j++) {
                int left = DP[i-1][j] + 1;
                int right = DP[i][j-1] + 1;
                int left_right = DP[i-1][j-1];

                if (word1[i-1] != word2[j-1]) left_right += 1;
                DP[i][j] = min(left, min(right, left_right));

            }
        }
        return DP[m][n];
    }
};

int main()
{
    string word1 = "horse";
    string word2 = "ros";
    Solution obj;

    cout << obj.minDistance(word1, word2) << endl;
    cout << obj.minDistance2(word1, word2) << endl;
    return 0;
}