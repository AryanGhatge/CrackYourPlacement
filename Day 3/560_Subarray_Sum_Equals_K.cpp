class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int, int> smap;
        smap[0] = 1;
        int presum = 0, count = 0;

        for(int i=0; i<nums.size(); i++){
            presum += nums[i];
            int remove = presum - k;
            count += smap[remove];
            smap[presum]++;
        }

        return count;
    }
};