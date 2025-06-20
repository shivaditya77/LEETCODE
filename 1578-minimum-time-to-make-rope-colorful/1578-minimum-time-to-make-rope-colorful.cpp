class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n=colors.size();
        int maxi=neededTime[0];
        int sum=0;
        for(int i=1;i<n;i++)
        {
          if(colors[i]==colors[i-1])
          {
            sum+= min(neededTime[i],maxi);
            maxi=max(maxi,neededTime[i]);
          }
          else
          {
            maxi=neededTime[i];
          }
        }
        return sum;
    }
};