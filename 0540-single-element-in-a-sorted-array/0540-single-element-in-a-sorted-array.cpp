class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // int result=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     result=result^nums[i];
        // }
        // return result;

        // int start = 0;
        // int end = nums.size() - 1;
        // while (start < end) {
        //     int mid = start + (end - start) / 2;
        //     if (mid % 2 != 0) {
        //         mid--;
        //     }
        //     if (nums[mid] == nums[mid + 1]) {
        //         start = mid + 2;
        //     } else {
        //         end = mid;
        //     }
        // }
        // return nums[start];

        stack<int>st;
        for(int i=0;i<nums.size();i++)
        {
            if(st.empty())
            {
                st.push(nums[i]);
                continue;
            }

            if(st.top()==nums[i])
            {
                st.pop();
            }
            else
            {
                st.push(nums[i]);
            }
        }
        return st.top();
    }
};