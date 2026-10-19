class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string common=strs[0];

        for(int i=1;i<strs.size();i++)
        {
            // find and update the new common betwen the old common and the new word 

            string newCommon="";
            for(int j=0;j<common.size();j++)
            {
                if(common[j] == strs[i][j])
                newCommon+=strs[i][j];

                else 
                break;
            }

            common=newCommon;
        }

        return common;
    }
};