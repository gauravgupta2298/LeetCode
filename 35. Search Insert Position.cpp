class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
	    int first = 0,last = nums.size()-1;
	    int middle = (first+last)/2;
	    while (first <= last)
	    {
            if(nums[middle] < target)
            {
                first = middle + 1;
            }
            else if(nums[middle] == target)
            {
                 break;
            } 
            else 
            { 
                 last = middle - 1; 
            } 
            middle = (first + last)/2; 
        } 
        if(first > last)
        {
	        return first;
	    }
        else
        {
            return middle; 
        }
    }
};
