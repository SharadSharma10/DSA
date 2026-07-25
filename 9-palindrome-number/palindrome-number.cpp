class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        long long s = 0;
        if(x < 0) return false;
        while(temp != 0){
            int n = temp % 10;
            temp /= 10;
            s = s * 10 + n;
        }
        return x == s;
    }
};