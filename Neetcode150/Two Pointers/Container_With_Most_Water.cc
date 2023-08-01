class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size()-1;
        
        int max_area = -1;
        while (left < right) {
            int y = min(height[left], height[right]);
            int x = right-left;
            int a = y*x;
            max_area = max(a, max_area);
            if (height[left] < height[right]) {
                left++;
            } else if (height[left] > height[right]) {
                right--;
            } else {
                left++; right--;
            }
        }
        
        return max_area;
    }
};