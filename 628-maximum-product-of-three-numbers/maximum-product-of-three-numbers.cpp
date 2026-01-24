class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        if (nums.size() < 3) return 0;

        int min1 = INT_MAX, min2 = INT_MAX;
        int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;

        for (int num : nums) {
            // Update largest three
            if (num > max1) {
                max3 = max2;
                max2 = max1;
                max1 = num;
            } else if (num > max2) {
                max3 = max2;
                max2 = num;
            } else if (num > max3) {
                max3 = num;
            }

            // Update smallest two
            if (num < min1) {
                min2 = min1;
                min1 = num;
            } else if (num < min2) {
                min2 = num;
            }
        }

        // Compare: (largest three) vs (two smallest × largest)
        return max(max1 * max2 * max3, min1 * min2 * max1);
    }
};