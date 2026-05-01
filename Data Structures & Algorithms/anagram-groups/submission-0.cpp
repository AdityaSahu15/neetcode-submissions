class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        map<string,vector<string>> mpp;

        for(int i=0;i<strs.size();i++)
        {
            // find the freq of each character in the word 

            string key="";
            int hash[26]={0};

            for(int j=0;j<strs[i].size();j++)
            {
                hash[strs[i][j]-'a']++;
            }

            // now extract the key

            for(int k=0;k<26;k++)
            {
                key+=hash[k];
                key+='#';
            }

            mpp[key].push_back(strs[i]);
        }

        vector<vector<string>> ans;

        for(auto it:mpp)
        {
            ans.push_back(it.second);
        }

        return ans;
        
    }
};
