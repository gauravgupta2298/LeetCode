class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int last=digits.size()-1;
        if(digits[last]!=9){
            digits[last]++;
            return digits;
        }
        else{
            do{
                digits[last]=0;
                if(last>0){
                last--;
                digits[last]++;
                }
            }while(digits[last]==10);
        }
        if(digits[last]==0)
        {
            vector<int>::iterator it=digits.begin();
            digits.insert(it,1);
        }
        return digits;
    }
};
