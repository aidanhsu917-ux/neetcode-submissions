#include <vector>

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        int n = size(nums);
        
        for(int i = 0; i < 2; i++){
            for(int i = 0; i < n; i++){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};