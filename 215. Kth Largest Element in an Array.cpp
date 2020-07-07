class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        if(nums.size()==0 && k>nums.size()){
            return 0;
        }
        priority_queue<int> q;
        for(int i=0;i<nums.size();i++){
            if(i<k){
                q.push(-nums[i]);
            }
            else if(-q.top()<nums[i]){
                q.pop();
                q.push(-nums[i]);
            }
        }
        return -q.top();
    }
};
