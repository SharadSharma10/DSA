class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;      // no carry left, finished early
            }
            digits[i] = 0;          // 9 + 1 = 10, write 0 and carry
        }
        // only reached if all digits were 9
        digits.insert(digits.begin(), 1);
        return digits;
    }
};