class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int max_product1 = 0;
        int max_product2 = 0;
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        max_product1 = nums[0]*nums[1]*nums[n-1];
        max_product2 = nums[n-1]*nums[n-2]*nums[n-3];

        return max(max_product1, max_product2);
    }
};