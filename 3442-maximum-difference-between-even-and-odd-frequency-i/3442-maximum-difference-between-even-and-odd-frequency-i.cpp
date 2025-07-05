class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> mp;
        for (char c : s) {
            mp[c]++;
        }

        int maxOdd = 0;
        int minEven = INT_MAX;
        bool hasOdd = false, hasEven = false;

        for (auto it : mp) {
            if (it.second % 2 == 1) {
                maxOdd = max(maxOdd, it.second);
                hasOdd = true;
            } else {
                minEven = min(minEven, it.second);
                hasEven = true;
            }
        }

        if (!hasOdd || !hasEven) return -1;
        return maxOdd - minEven;
    }
};
