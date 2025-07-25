class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0)
        {
            return true;
        }
        int l=flowerbed.size();
        for(int i=0;i<l;i++)
        {
            if(flowerbed[i]==0)
            {
            bool leftkhali=(i==0) || (flowerbed[i-1]==0);
            bool rightkhali=(i==l-1) ||(flowerbed[i+1]==0);

             if(leftkhali && rightkhali) 
             {
                flowerbed[i]=1;
                n--;
             }
            }
            if(n==0)
             {
                return true;
             }
        }
        return false;
    }
};