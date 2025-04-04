class Solution {
public:
    int arrangeCoins(int n) {
        long int start=0;
        long int end=n;
        int ans;
        while(start<=end)
        {
            long long int mid=start+(end-start)/2;

            if((mid*(mid+1))/2<=n)
            {
                ans=mid;
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return ans;
    }
};