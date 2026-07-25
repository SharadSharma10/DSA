class Solution {
public:
    int reverse(int x) {
        long long s = 0;
        while(x != 0){
            int n = x % 10;
            x = x / 10;
            s = s * 10 + n;
        }
        if (s > INT_MAX || s < INT_MIN) {
            return 0;
        }
        return s;
    }
};