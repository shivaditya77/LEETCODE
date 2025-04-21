class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int i=0;
        int count=0;
        while(i<costs.size())
        {
            if(costs[i]<=coins)
            {
                count++;
                coins=coins-costs[i];
            }
            i++;
        }
        return count;
    }
};