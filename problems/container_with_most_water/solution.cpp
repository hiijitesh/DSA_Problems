class Solution {
public:
    int maxArea(vector<int>& pool) {
        
        int left = 0, right = pool.size()-1;

        int water = 0, area = 0;

        while(left < right)
        {
            water = right - left;
            area = max(area, water*min(pool[left], pool[right]));

            if(pool[left]> pool[right])
                right--;
            else if(pool[left] <= pool[right])
                left++;
            // else{
            //     left++;
            //     right--;
            // }

        }
        return area;
    }
};