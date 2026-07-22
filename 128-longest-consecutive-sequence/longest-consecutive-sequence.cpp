class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest = 0;
        unordered_set<int> s(nums.begin(), nums.end());
        for(auto num : s) {
            if (s.find(num - 1) == s.end()) {
                int length = 1;
                while (s.find(num + length) != s.end()) {
                    length++;
                }
            longest = max(longest, length);
            }
        }
        return longest;
    }
};