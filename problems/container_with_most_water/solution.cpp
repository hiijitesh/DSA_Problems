class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int start = 0, end = height.size()-1;
        
        int water = 0, h = 0;
        int area = 0;
        
        while(start < end)
        {
            water = end - start;
            h = min(height[start], height[end]);
            
            area = max(area, water * h);
            
            if(height[start] < height[end])
                start++; //we need to move minm one
            else if(height[start] > height[end])
                end --;
            else
            {
                start++;
                end--;
            }
        }
        return area;
        
    }
};