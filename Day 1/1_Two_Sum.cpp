class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> hashmap;
        int complement = 0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            complement = target - nums[i];
            if(hashmap.find(complement) != hashmap.end()){
                return {hashmap[complement], i};
            }
            hashmap[nums[i]] = i;
        }
        return {};
    }
};
