class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

  // Step 1: Store original indices with values
    vector<pair<int, int>>NI;
    for (int i = 0; i < nums.size(); i++) {
        NI.push_back({nums[i], i});
    }

        
    // Step 2: Sort the array based on values
    sort(NI.begin(), NI.end());

     // Step 3: Use two-pointer technique
        int i=0;
        int j=nums.size()-1;
        vector<int>ans;
        while(i<=j)
        {
            if(NI[i].first+NI[j].first>target)
            {
                j--;
            }
            else if(NI[i].first+NI[j].first<target)
            {
                i++;
            }
            else if(NI[i].first+NI[j].first==target)
            {
               return {NI[i].second, NI[j].second};
            }
        }
       return nums;
    }
};