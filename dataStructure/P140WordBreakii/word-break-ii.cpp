/*
给定一个非空字符串 s 和一个包含非空单词列表的字典 wordDict，在字符串中增加空格来构建一个句子，使得句子中所有的单词都在词典中。返回所有这些可能的句子。
说明：
    分隔时可以重复使用字典中的单词。
    你可以假设字典中没有重复的单词。

示例 1：
输入:
s = "catsanddog"
wordDict = ["cat", "cats", "and", "sand", "dog"]
输出:
[
  "cats and dog",
  "cat sand dog"
]

示例 2：
输入:
s = "pineapplepenapple"
wordDict = ["apple", "pen", "applepen", "pine", "pineapple"]
输出:
[
  "pine apple pen apple",
  "pineapple pen apple",
  "pine applepen apple"
]
解释: 注意你可以重复使用字典中的单词。

示例 3：
输入:
s = "catsandog"
wordDict = ["cats", "dog", "sand", "and", "cat"]
输出:
[]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/word-break-ii
*/
#include <vector>
#include <string>
#include <iostream>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        vector<bool>dp1(s.length(), 0);
        unordered_set<string> m(wordDict.begin(), wordDict.end());
        dp1[0] = true;

        for (int i = 1; i <= s.size(); ++i) {
            for (int j = 0; j<=i; ++j) {
                if ( dp1[j] && m.find(s.substr(j, i-j)) != m.end() ) {
                    dp1[i] = true;
                    break;
                }
            }
        }

        if (! dp1[s.size()]) return {};
        
        vector<vector<string> > dp2(s.size()+1, vector<string>());
        dp2[0] = {""};
        string str = " ";
        for (int i = 1; i < s.size()+1; i++) {
            for (int j = i-1; j >= 0; j--) {
                if (m.find(s.substr(j, i-j)) != m.end() ) {
                    for (int k = 0; k < dp2[j].size(); k++) {
                        if (dp2[j][k].size() == 0) {
                            dp2[i].push_back(s.substr(j, i-j));
                        } else {
                            dp2[i].push_back(dp2[j][k] + str + s.substr(j, i-j));
                        }
                    }
                }
            }
        }
        return dp2.back();
    }
};


int main() {
    string s = "catsanddog";        
    vector<string> wordDict = {"cat", "cats", "and", "sand", "dog"};
    Solution obj;
    vector<string> ret;
    ret = obj.wordBreak(s, wordDict);
    for (int i = 0; i<ret.size()+1; i++) {
        cout << ret[i] << endl;
    }
    return 0;
}