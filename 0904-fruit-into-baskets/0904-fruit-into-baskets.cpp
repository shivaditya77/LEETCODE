// //TLE
// class Solution {
// public:
//     int totalFruit(vector<int>& fruits) {
//         int n = fruits.size();
//         int k = 2;
//         int maxi = INT_MIN;
//         for (int i = 0; i < n; i++) {
//             unordered_map<int, int> mp;
//             int p = 1;
//             for (int j = i; j < n; j++) {
//                 if (mp.find(fruits[j]) != mp.end()) {
//                     mp[fruits[j]]++;
//                 } else if (mp.find(fruits[j]) == mp.end()) {
//                     if (p <= k) {
//                         mp[fruits[j]]++;
//                         p++;
//                     } else {
//                         break;
//                     }
//                 }
//             }
//             int sum = 0;
//             for (auto it : mp) {
//                 sum += it.second;
//             }
//             maxi = max(maxi, sum);
//         }
//         return maxi;
//     }
// };










class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int maxi=INT_MIN;
        int k=2;
        int n=fruits.size();
        unordered_map<int,int>mp;
        int p=1;
        int left=0;
        for(int right=0;right<n;right++)
        {
          if(mp.find(fruits[right])!=mp.end())
          {
             mp[fruits[right]]++;
          }
          else if(mp.find(fruits[right])==mp.end())
          {
             if(p<=k)
             {
                mp[fruits[right]]++;
                p++;
             }
             else if(p>k)
             {
                mp[fruits[left]]--;
                if(mp[fruits[left]]==0)
                {
                    p--;
                    mp[fruits[right]]++;
                }

                left++;
             }
          }
          maxi=max(maxi,right-left+1);
        }
        return maxi;
    }
};