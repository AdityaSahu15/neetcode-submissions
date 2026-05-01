class Solution {
public:
    bool isAnagram(string s, string t) {

        /*
        
        map<char,int> mpp1;
        map<char,int> mpp2;

        for(int i=0;i<s.size();i++)
        {
            mpp1[s[i]]++;
        }

        
        for(int i=0;i<t.size();i++)
        {
            mpp2[t[i]]++;
        }

        if(mpp1 == mpp2)
        return true;

        return false;

        */

        if(s.size() != t.size()) 
        return false;

        int hash1[26]={0};
        int hash2[26]={0};

        for(int i=0;i<s.size();i++)
        {
            hash1[s[i]-'a']++;
        }

        
        for(int i=0;i<t.size();i++)
        {
            hash2[t[i]-'a']++;
        }

        for(int i=0;i<26;i++)
        {
            if(hash1[i] != hash2[i])
            return false;
        }

        return true;
    }
};
