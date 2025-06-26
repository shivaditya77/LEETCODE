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
        unordered_map<int, int> mp;
        int left = 0;
        int maxFruits = 0;
        int k = 2;

        for (int right = 0; right < fruits.size(); right++) {
            mp[fruits[right]]++;

            // Remove from the left until only 2 types remain
            while (mp.size() > k) {
                mp[fruits[left]]--;
                if (mp[fruits[left]] == 0) {
                    mp.erase(fruits[left]);
                }
                left++;
            }

            maxFruits = max(maxFruits, right - left + 1);
        }

        return maxFruits;
    }
};
