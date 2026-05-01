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
        for(auto it:st)
        {
            while(st.find(it-1) != st.end())
            {
                it=it-1;
            }

            int count=0;

            while(st.find(it) != st.end())
            {
                count++;
                it++;
            }

            maxi=max(maxi,count);

        }

        return maxi;
    }
};
