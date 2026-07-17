class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> check;

        for (int i=0; i<nums.size(); i++) {
            int needed = target - nums[i];
            if (check.find(needed)!=check.end()) {
                return {check[needed], i}; 
            }
            check[nums[i]]=i;
        }
        return {};

    }
};