class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        
        sort(potions.begin(),potions.end());
        int m=spells.size();
        int n=potions.size();

        vector<int>result;

        for(int i=0;i<m;i++)
        {
           if(spells[i]*potions[n-1]<success)
           {
            result.push_back(0);
            continue;
           }

           int start=0;
           int end=n-1;
           int save=-1;
           while(start<=end)
           {
            int mid=end+(start-end)/2;
            if(spells[i]*potions[mid]<success)
            {
                start=mid+1;
            }
            else if(spells[i]*potions[mid]>=success)
            {
                save=mid;
                end=mid-1;
            }
           }
           int k=n-save;
           result.push_back(k);
        }
        return result;
    }
};