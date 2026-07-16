class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> result;
        // for(int i = 0; i < strs.size(); i++){
        //     string key = strs[i];
        //     sort(key.begin(), key.end());
        //     mp[key].push_back(strs[i]);
        // }
        // for(const auto& [key,value] : mp){
        //     result.push_back(value);
        // }
        // return result;
        for(const string& s : strs){
            int count[26] = {0};
            for(char c : s) count[c - 'a']++;

            string key;
            for(int i = 0; i< 26; i++){
                key += '#' + to_string(count[i]);
            }
            mp[key].push_back(s);
        }
        for(const auto& [key,value] : mp){
            result.push_back(value);
        }
        return result;
    }
};