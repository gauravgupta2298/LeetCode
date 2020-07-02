class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int flag=0,max=nums[0],sum=0;
        for(int i=0;i<nums.size();i++){ 
            //if every no is 0 or -ve
            if(nums[i]<=0) flag++;
            if(nums[i]>max) max=nums[i];
        }
        if(flag==nums.size()) return max;
        max=0;
        for(int i=0;i<nums.size();i++){
            if(sum+nums[i]<0){
                sum=0;
            }
            else{
                sum=sum+nums[i];
                if(sum>max) max=sum;
            }
        }
        return max; //applied kadane's algo
    }
};
