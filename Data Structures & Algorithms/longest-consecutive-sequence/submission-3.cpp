class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        /*

        sort(nums.begin(),nums.end());

        int maxi=0;
        int count=0;

        int prev=INT_MIN;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == prev)
            continue;

            else if((nums[i]-prev) == 1)
            count++;

            else 
            count=1;

            prev=nums[i];

            maxi=max(maxi,count);
        }

        return maxi;

        */

        unordered_set<int> st;

        for(auto it:nums)
        {
            st.insert(it);
        }

        int maxi=0;
        int count=1;

        for(auto it:st)
        {
            if(st.find(it-1) == st.end()) // start from the very start
            {
            count=1;
            int x=it;
            while(st.find(x+1) != st.end())
                {
                count++;
                x=x+1;
                }
            }
 
            maxi=max(maxi,count);
        }

        return maxi;
    }
};
