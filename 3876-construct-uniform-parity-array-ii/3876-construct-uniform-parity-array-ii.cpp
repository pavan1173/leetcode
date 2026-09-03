class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minv = nums1[0];
        for (int x : nums1) {
            if (x < minv)
                minv = x;
        }
        if (minv % 2 != 0)
            return true;
        for (int x : nums1) {
            if (x % 2 != 0)
                return false;
        }
        return true;
    }
};