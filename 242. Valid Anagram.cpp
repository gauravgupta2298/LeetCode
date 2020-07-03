class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        map<char, int> counter;
        for(int i=0;i<s.length();i++){
            counter[s[i]]++;
        }
        for(int i=0;i<t.length();i++){
            counter[t[i]]--;
        }
        map<char, int>::iterator itr; 
        for (itr = counter.begin(); itr!=counter.end(); itr++){ 
            if(itr->second==0)
                continue;
            else 
                return false;
        }
        return true;
    }
};
