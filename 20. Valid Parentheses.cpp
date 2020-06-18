class Solution {
public:
    bool isValid(string s) {
        if(s.length()==0) return true;
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            else{
                if(st.size()>0 && st.top()=='(' && s[i]==')')
                st.pop();
                else if(st.size()>0 && st.top()=='{' && s[i]=='}')
                st.pop();
                else if(st.size()>0 && st.top()=='[' && s[i]==']')
                st.pop();
                else return false;
            }
        }
        return st.empty();
    }
};
