class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n=customers.size();
        int wt=0;
        int sum=customers[0][0]+customers[0][1];
        wt=sum-customers[0][0];
        for(int i=1;i<n;i++)
        {
            if(sum>=customers[i][0])
            {
                sum+=customers[i][1];
                wt+=sum-customers[i][0];
            }
            else
            {
                sum=0;
                sum=customers[i][0]+customers[i][1];
                wt+=sum-customers[i][0];
            }
        }
        return (double)wt/n;
    }
};