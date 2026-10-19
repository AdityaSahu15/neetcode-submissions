class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>> mpp;

        for(int i=0;i<strs.size();i++)
        {
            string code="";

            // generate the code 

            vector<int> hash(26,0);
            for(auto it:strs[i])
            {
                hash[it-'a']++;
            }

            // now extract the new code 

            for(int i=0;i<26;i++)
            {
                if(hash[i] != 0)
                code+=(i+'a');
                code+=hash[i]+'0';
            }

            mpp[code].push_back(strs[i]);
        }

        vector<vector<string>> ans;

        for(auto it:mpp)
        {
            ans.push_back(it.second);
        }

        return ans;

    }
};
