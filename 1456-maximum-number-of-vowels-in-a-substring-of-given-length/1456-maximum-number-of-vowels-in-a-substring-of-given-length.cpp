// class Solution {
// public:
//     int maxVowels(string s, int k) {
//       int n=s.size();
//       int maxi=INT_MIN;
//       for(int i=0;i<=n-k;i++)
//       {
//         string st=s.substr(i,k);
//         int count=0;
//         for(int j=i;j<=i+k-1;j++)
//         {
//             if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u' )
//             {
//                 count++;
//             }
//         }
//         maxi=max(maxi,count);
//       }  
//       return maxi;
//     }
// };




class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.size();
        int left=0;
        int count=0;
        int maxi=0;
        for(int right=0;right<n;right++)
        {
            if(s[right]=='a'|| s[right]=='e' || s[right]=='i' || s[right]=='o' || s[right]=='u')
            {
                count++;
            }
            maxi=max(maxi,count);

            if(right-left+1==k)
            {
                count=0;
                left++;
                right=left-1;
            }
        }
        return maxi;
    }
};