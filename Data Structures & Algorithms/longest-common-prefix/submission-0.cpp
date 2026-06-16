#include <string>
#include <vector>

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pre = "";
        vector<char> temp(strs.size(), '\0');
        int shortest  = (strs.at(0)).size();

        for(int i = 1; i < strs.size(); i++) { //for finding shortest character
            std::cout << "i = " << i << "\n";

            if((strs.at(i)).size() < shortest) {
                shortest = (strs.at(i)).size();
                std::cout << shortest;
            }
        }

        for(int j = 0; j < shortest; j++) { //outer loop for letters
            for(int k = 0; k < strs.size(); k++) { //inner loop for elements
                temp[k] = strs.at(k)[j];
                
                if(temp[k] != temp[k - 1] && k > 0) {
                    return pre;
                }
            }
            //temp is now filled
            
            pre.push_back(temp[0]);
        }
        
        return pre;
    }
};