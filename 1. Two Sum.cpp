class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size(), toFind=0;
        unordered_map<int, int> data;
        
        for(int i= 0; i<n; i++){
            toFind = target-nums[i];
            if(data.count(toFind)){
                return {data[toFind], i}; //pair of index of 2 numbers whose sum==target
            }
            data[nums[i]] = i; //insert current element as key and index as value into map
        }
        
        return {}; //no such pair exists
    }
};
