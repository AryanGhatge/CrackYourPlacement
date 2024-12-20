class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // code here
        sort(a.begin(), a.end());
        int n = a.size();
        int mini = INT_MAX;
        int i = 0, j = m-1;
        int diff = 0;
        
        while(j < n){
            diff = a[j] - a[i];
            mini = min(mini, diff);
            i++, j++;
        }
        
        return mini;
        
    }
};