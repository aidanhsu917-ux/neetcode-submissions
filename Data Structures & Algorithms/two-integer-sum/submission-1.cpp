#include <vector>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> r;
        
        for (int i = 0; i < size(nums); i++) {
            for (int j = 0; j < size(nums); j++) {
                std::cout << i;
                std::cout << j;

                if(i == j){
                    continue;
                }

                if (nums.at(i) + nums.at(j) == target) {
                    r.push_back(i);
                    r.push_back(j);
                    
                    return r;
                }
            }
        }

        return r;
    }
};
