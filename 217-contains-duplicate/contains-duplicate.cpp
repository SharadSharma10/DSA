
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {        
        unordered_set<int> set;
        for (int x : nums) {
    set.insert(x);
}
        if(nums.size() == set.size()) {
            return false;
        }
        return true;
    }
};