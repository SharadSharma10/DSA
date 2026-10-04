class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k = s1.size(), n = s2.size();
        if (k > n) return false;

        vector<int> need(26, 0), win(26, 0);
        for (char c : s1) need[c - 'a']++;

        for (int i = 0; i < n; i++) {
            win[s2[i] - 'a']++;                 
            if (i >= k) win[s2[i - k] - 'a']--; 
            if (win == need) return true;      
        }
        return false;
    }
};