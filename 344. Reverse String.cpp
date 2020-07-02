class Solution {
public:
    void reverseString(vector<char>& s) {
        char swap;
        int n=s.size(),loop=n/2;
        n--;
        while(loop--){
            swap=s[loop];
            s[loop]=s[n-loop];
            s[n-loop]=swap;
        }
    }
};
