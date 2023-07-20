class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      
        int slow = 0;
        int fast = 0;
        do {
            slow = nums[slow];
            // cout<<"slow: "<<slow<<" ";
            fast = nums[nums[fast]];
            // cout<<"fast: "<<fast<<" ";

        } while (slow != fast);

        slow = 0;
        while (slow != fast) {
            slow = nums[slow];
            // cout<<"slow: "<<slow<<" ";
            fast = nums[fast];
            // cout<<"fast: "<<fast<<" ";
        }
        
        return slow;
    }
};