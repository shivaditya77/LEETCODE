class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n=colors.size();
        int sum=0;
        for(int i=1;i<n;i++)
        {
          if(colors[i]==colors[i-1])
          {
            sum+= min(neededTime[i-1],neededTime[i]);
          }
        }
        if(sum==0)
        {
            return 0;
        }
        else
        {
            return sum;
        }
    }
};