class Solution {
public:
    bool checkPerfectNumber(int num) {
        set<int> st;
        for (int i = 1; i < num; i++){
            if(num % i == 0){
                st.insert(i);
            }
        }
        int sum = 0;
        for(int i : st){
            sum = sum + i;
        }
        return sum == num;
    }
};