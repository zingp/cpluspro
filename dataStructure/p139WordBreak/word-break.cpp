/*
139 单词拆分

给定一个非空字符串 s 和一个包含非空单词列表的字典 wordDict，判定 s 是否可以被空格拆分为一个或多个在字典中出现的单词。
说明：
拆分时可以重复使用字典中的单词。
你可以假设字典中没有重复的单词。

示例 1：
输入: s = "leetcode", wordDict = ["leet", "code"]
输出: true
解释: 返回 true 因为 "leetcode" 可以被拆分成 "leet code"。

示例 2：
输入: s = "applepenapple", wordDict = ["apple", "pen"]
输出: true
解释: 返回 true 因为 "applepenapple" 可以被拆分成 "apple pen apple"。
     注意你可以重复使用字典中的单词。

示例 3：
输入: s = "catsandog", wordDict = ["cats", "dog", "sand", "and", "cat"]
输出: false

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/word-break

解题思路：动态规划 时间复杂度 O(n^2) 空间复杂度 O(n)
DP[i]表示字符串s前i个字符是否可以拆分

【优化】
对于以上代码可以优化。每次并不需要从s[0]开始搜索。
因为wordDict中的字符串长度是有限的。只需要从i-maxWordLength开始搜索就可以了。
*/
#include<iostream>
#include<string>
#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<bool>DP(s.size()+1, 0);

        unordered_set<string> m(wordDict.begin(), wordDict.end());
        DP[0] = true;
        for (int i = 1; i <= s.size(); ++i) {
            for (int j = 0; j<=i; ++j) {
                if ( DP[j] && m.find(s.substr(j, i-j)) != m.end() ) {
                    DP[i] = true;
                    break;
                }
            }
        }
        
        return DP[s.size()];
    }

    bool wordBreak2(string s, vector<string>& wordDict) {
        vector<bool> DP(s.size()+1, false);
        unordered_set<string> m(wordDict.begin(), wordDict.end());
        DP[0] = true;
        //获取最长字符串长度
        int maxWordLength = 0;
        for (int i = 0; i < wordDict.size(); ++i){
            maxWordLength = max(maxWordLength, (int)wordDict[i].size());
        }
        for (int i = 1; i <= s.size(); ++i){
            for (int j = max(i-maxWordLength, 0); j < i; ++j){
                if (DP[j] && m.find(s.substr(j, i-j)) != m.end()){
                    DP[i] = true;
                    break;
                }
            }
        }
        
        return DP[s.size()];
    }
};


int main() {
    Solution obj;
    // string s = "applepenapple";
    string s = "catsandog";
    //vector<string> wordDict = {"apple", "pen"};
    vector<string> wordDict {"cats", "dog", "sand", "and", "cat"};
    
    bool res;
    res = obj.wordBreak2(s, wordDict);
    cout << res << endl;
    return 0;
}