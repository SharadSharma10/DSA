class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        vector<vector<int>> buckets(nums.size() + 1);   // ✅ correct
        for(const auto&[num, freq] : mp){
            buckets[freq].push_back(num);
        }
        vector<int> result;
        for (int i = buckets.size()-1; i >= 1 && result.size() < k; i--) { 
            for(int num : buckets[i]) {
                result.push_back(num);
                if(result.size() == k) break;
            }
        }
        return result;
    }
};