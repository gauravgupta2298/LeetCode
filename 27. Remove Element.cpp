class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>::iterator p =nums.begin();
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                nums.erase(p+i);
                i--;   
                if(i==-1) p=nums.begin();
            }
        }
        return nums.size();
    }
};
