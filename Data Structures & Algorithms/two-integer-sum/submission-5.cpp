class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        /*

        int n=nums.size();

        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if((nums[i] + nums[j]) == target)
                return {i,j};
            }
        }

        return {-1,-1};

        */

        int n=nums.size();

        vector<pair<int,int>> v;
        for(int i=0;i<n;i++)
        {
            v.push_back({nums[i],i});
        }

        sort(v.begin(),v.end());

        int s=0;
        int e=n-1;

        while(s<e)
        {
            int sum=v[s].first+v[e].first;

            if(sum == target)
            {
                vector<int> ans={v[s].second,v[e].second};
                sort(ans.begin(),ans.end());

                return ans;
            }

            else if(sum > target)
            e--;

            else 
            s++;
        }

        return {-1,-1};

        /*

        unordered_map<int,int> mpp;
        
        for(int i=0;i<nums.size();i++)
        {
            int rem=target-nums[i];
            if(mpp.find(rem) != mpp.end())
            return {mpp[rem],i};

            mpp[nums[i]]=i;
        }

        return {-1,-1};

        */

    }
};
