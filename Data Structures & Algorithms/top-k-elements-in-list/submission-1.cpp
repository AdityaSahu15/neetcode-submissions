class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        /*

        map<int,int> mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }


        vector<pair<int,int>> v;
        for(auto it:mpp)
        {
            v.push_back({it.second,it.first}); // sorting based on freq
        }

        sort(v.rbegin(),v.rend());

        // we have to pick the last k

        int count=0;

        vector<int> ans;

        for(int i=0;i<v.size();i++)
        {
            if(count == k)
            break;

            ans.push_back(v[i].second);
            count++;
        }

        return ans;
        
        */

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        // {freq,element}

        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }

        for(auto it:mpp)
        {
            pq.push({it.second,it.first});
            if(pq.size() > k)
            pq.pop();
        }

        vector<int> ans;
        while(!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};
