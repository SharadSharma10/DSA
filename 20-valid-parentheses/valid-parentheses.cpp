class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> pairs = {{')','('}, {']','['}, {'}','{'}};
        for(char i : s){
            if(i == '(' || i == '{' || i == '['){
                st.push(i);
            }
            else{
                if(st.empty() || st.top() != pairs[i]){
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};