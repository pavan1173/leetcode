#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        // Store pair: {value, original_index}
        std::vector<std::pair<int, int>> indexedNums;
        for (int i = 0; i < nums.size(); ++i) {
            indexedNums.push_back({nums[i], i});
        }
        
        // Proper way to sort in C++
        std::sort(indexedNums.begin(), indexedNums.end());
        
        int low = 0, high = indexedNums.size() - 1;
        while (low < high) {
            int sum = indexedNums[low].first + indexedNums[high].first;
            
            if (sum == target) {
                return {indexedNums[low].second, indexedNums[high].second};
            } else if (sum < target) {
                low++;
            } else {
                high--;
            }
        }
        
        return {};
    }
};