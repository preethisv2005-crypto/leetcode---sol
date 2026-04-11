class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi = 0;
        int left = 0;
        int right = height.size() - 1;

        while (left < right) {
            // Calculate current area
            int h = min(height[left], height[right]);
            int w = right - left;
            maxi = max(maxi, h * w);

            // Move the pointer pointing to the shorter line
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return maxi;
    }
};