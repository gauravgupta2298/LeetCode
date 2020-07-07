class Solution {
public:
    vector<int> countBits(int num) {
        //brute force solution
        vector<int> ans;
        int n, count;
        for(int i=0;i<=num;i++){
            n=i; count=0;
            while(n!=0){
                if(n&1==1){
                    count++;
                }
                n=n/2;
            }
            ans.push_back(count);
        }
        return ans;
    }
};
