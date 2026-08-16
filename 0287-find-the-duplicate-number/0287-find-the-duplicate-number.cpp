class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int l = nums[0];
        int h = nums[0];
        do{
            l = nums[l];
            h = nums[nums[h]];
        }
        while(l!=h);
        l = nums[0];
        while(l!= h){
            l = nums[l];
            h = nums[h];
        } return l;
    }
};