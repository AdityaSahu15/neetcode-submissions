class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int n=piles.size();
        int s=1;
        int e=INT_MIN;

        for(int i=0;i<n;i++)
        {
            e=max(e,piles[i]);
        }

        int ans=-1;

        while(s<=e)
        {
            int mid=s+(e-s)/2; // considering this the speed

            int time=0;

            for(int i=0;i<n;i++)
            {
                if(piles[i] % mid == 0)
                time+=(piles[i]/mid);
                else 
                time+=(piles[i]/mid+1);
            }

            if(time > h)
            {
               
                s=mid+1;
            }

            else
            {
                ans=mid;
                e=mid-1;
            }
            
            
        }

        return ans;
    }
};
