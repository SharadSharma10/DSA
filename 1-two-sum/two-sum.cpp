#include <vector>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> arr;
        for (int i = 0; i < size(nums); i++) {
            for(int j = i+1; j < size(nums); j++) {
                if (nums[i] + nums[j] == target) {
                    arr.push_back(i);
                    arr.push_back(j);
                    break; 
                }
                else{
                    continue;
                }
            }
        }
        return arr;
    }
};