class Solution {
public:
    int trap(vector<int>& height) {

        // just calculate next greater from left to right same for right to left

        // the amount of water at any point is min(left, right) - curr elemnt

        vector<int> leftMax(height.size(), 0);
        vector<int> rightMax(height.size(), 0);

        leftMax[0] = height[0];
        rightMax[height.size()-1] = height[height.size()-1];

        for(int i = 1; i < height.size(); i++){
            leftMax[i] = max(leftMax[i-1], height[i]);
        }

        for(int i = height.size()-2; i >=0; i--){
                
                rightMax[i] = max(rightMax[i+1], height[i]);
        }

        int ans = 0, water = 0;
        for(int i = 0; i < height.size(); i++){
            ans = min(leftMax[i], rightMax[i]);
            water += max(0, ans - height[i]);
        }
       
        return water;
        
    }
};