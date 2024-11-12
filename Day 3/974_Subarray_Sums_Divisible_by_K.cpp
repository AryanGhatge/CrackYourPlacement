class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> prefixSumCount;
        prefixSumCount[0] = 1;
        int prefixSum = 0, result = 0;
        
        for (int num : nums) {
            prefixSum += num;
            int remainder = prefixSum % k;
            if (remainder < 0) remainder += k;  // Ensure remainder is non-negative
            
            if (prefixSumCount.find(remainder) != prefixSumCount.end()) {
                result += prefixSumCount[remainder];
            }
            
            prefixSumCount[remainder]++;
        }
        
        return result;
    }
};
