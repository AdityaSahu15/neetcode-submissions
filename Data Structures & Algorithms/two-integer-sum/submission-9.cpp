class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n=nums.size();

        vector<pair<int,int>> v; // {number,original index}

        for(int i=0;i<n;i++)
        {
            v.push_back({nums[i],i});
        }

        sort(v.begin(),v.end());

        int i=0;
        int j=n-1;

        while(i<j)
        {
            int sum=v[i].first + v[j].first;

            if(sum == target)
            {
                if(v[i].second < v[j].second)
                return {v[i].second,v[j].second};

                else 
                return {v[j].second,v[i].second};
            
            }

            else if(sum < target)
            i++;

            else 
            j--;
        }

        return {0,0};
    }
};
