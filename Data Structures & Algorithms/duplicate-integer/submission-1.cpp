#include <algorithm>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        
        if(size(nums) > 1) {
            for(int i = 0; i < size(nums) - 1; i++) {
                if(nums[i] == nums[i + 1]) {    
                    return true;
                }
            }
        }

        return false;
    }
};