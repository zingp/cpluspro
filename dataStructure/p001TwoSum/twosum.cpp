#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
     vector<int> twoSum(vector<int>& nums, int target) {
         unordered_map<int,int> record;
         vector<int> res;

         for (int i = 0; i < nums.size(); i++) {
            int v = target - nums[i];
            if (record.find(v) != record.end()) {
                res.push_back(i);
                res.push_back(record[v]);
                break;
            } else
                record[nums[i]] = i;
         }
         return res;
     }
};

int main() 
{
    int n[] = {2, 7, 11, 15};
    vector<int> nums(n, n+4) ;
    int target = 9;
    vector<int> res;
    
    Solution sObj;

    res = sObj.twoSum(nums, target);
    for (int i=0; i<res.size();i++){
        cout << res.at(i) << endl;
    }
}




