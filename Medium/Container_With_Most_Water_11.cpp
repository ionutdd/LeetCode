//https://leetcode.com/problems/container-with-most-water/
//40 minutes
//Very smart solution to the problem 

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi = 0;
        int left = 0;
        int right = height.size() - 1;
        while (left < right)
        {
            if (min(height[left], height[right]) * (right - left) > maxi)
                maxi = min(height[left], height[right]) * (right - left);
            
            if (height[left] < height[right])
                left++;
            else
                right--;
        }
        return maxi;
    }
};
