#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;
        int mid;
        while (low <= high) {
            mid = low + (high-low) / 2;
            if (nums[mid] == target) return mid;
            if (nums[mid] <= nums[high]){
                if (nums[mid] <= target && target <= nums[high])
                    low = mid + 1;
                else 
                    high = mid - 1;
            }else{
                if (nums[0] <= target && target <= nums[mid])
                    high = mid - 1;
                else 
                    low = mid + 1;
            }
        }
        return -1;
    }
};


int main() 
{
    // test1
    // nums = [4,5,6,7,0,1,2], target = 0,out=4
    int n[] = {4, 5, 6, 7, 0, 1, 2};
    vector<int> nums(n, n+7);
    int target = 0;
    int res;
    
    Solution sObj;

    res = sObj.search(nums, target);
    cout << res << endl;

    // test2 
    // nums = [4,5,6,7,0,1,2], target = 3, out=-1
    int n2[] = {4, 5, 6, 7, 0, 1, 2};
    vector<int> nums2(n2, n2+7);
    target = 3;
    res = sObj.search(nums2, target);
    cout << "out=" << res << endl;
}