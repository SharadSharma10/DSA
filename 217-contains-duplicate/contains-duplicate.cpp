#include <vector>
#include <algorithm>
#include <set>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {        
          set<int> s(nums.begin(), nums.end());

        // for (int x : s)
        //     cout << x << " ";
        if(nums.size() == s.size()) {
            return false;
        }
        return true;
    }
};