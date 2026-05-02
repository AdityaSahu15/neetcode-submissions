class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int s=0;
        int e=nums.size()-1;

        // binary search can be performed on a sorted segment
        // first identify the sorted segment and then apply BS

        while(s<=e)
        {
           int mid=s+(e-s)/2;

           if(nums[mid] == target)
           return mid;

           else if (nums[s] <= nums[mid]) // the array is left sorted
           {
            if(nums[s] <= target &&  target < nums[mid])
            e=mid-1;
            else 
            s=mid+1;
           }
           else // the array is right sorted
           {
            if(nums[mid] < target && target <= nums[e]) 
            s=mid+1;
            else 
            e=mid-1;
           }
        }
        
        return -1;
    }
};
