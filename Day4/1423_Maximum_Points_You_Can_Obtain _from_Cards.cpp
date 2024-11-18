class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int total_pts = accumulate(cardPoints.begin(), cardPoints.end(), 0);

        int windowSize = n - k;
        int sumOfCurrentWindow = accumulate(cardPoints.begin(), cardPoints.begin() + windowSize, 0);
        int minWindowSum = sumOfCurrentWindow;

        for (int i = windowSize; i < n; i++) {
            sumOfCurrentWindow += cardPoints[i] - cardPoints[i - windowSize];
            minWindowSum = min(minWindowSum, sumOfCurrentWindow);
        }

        return total_pts - minWindowSum;
    }
};