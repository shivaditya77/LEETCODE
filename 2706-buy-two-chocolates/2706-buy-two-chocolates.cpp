class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int sum=0;
        int k=money;
        int count=0;
        for(int i=0;i<prices.size();i++)
        {
            sum+=prices[i];
            if(sum<=money)
            {
                k=k-prices[i];
                count++;
            }
            if(count==2)
            {
              return k;
            }
        }
        if(count<2)
        {
            return money;
        }
        return -1;
    }
};