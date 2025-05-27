class Solution {
public:
    int tribonacci(int n) {
        if(n==0)
        {
            return 0;
        }
        int prev2=0;
        int prev1=1;
        int prev=1;
        for(int i=3;i<=n;i++)
        {
            int sum=prev2+prev1+prev;
            prev2=prev1;
            prev1=prev;
            prev=sum;
        }
        return prev;
    }
};