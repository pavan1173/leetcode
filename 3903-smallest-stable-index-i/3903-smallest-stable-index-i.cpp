class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> su(n);
        su[n - 1] = nums[n - 1];
        for(int i = n - 2; i >= 0; --i) {
            su[i] = min(nums[i], su[i + 1]);
        }
        int pre = nums[0];
        for (int i = 0; i < n; ++i) {
            pre = max(pre, nums[i]);
            if (pre - su[i] <= k) {
                return i;
            }
        }

        return -1;
    }
};