class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        int min =nums[0];
        int max = nums[0];
        unordered_set<int> present;
        for(int i=0;i<n;i++){
            if(nums[i]>max) max = nums[i];
            if(nums[i]<min) min = nums[i];
            present.insert(nums[i]);
        }
        vector<int> re;
        for(int i= min ;i<=max;i++){
            if(present.find(i)==present.end()){
                re.push_back(i);
            }
        }
        return re;
        
    }
};