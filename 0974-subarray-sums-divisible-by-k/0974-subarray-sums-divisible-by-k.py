class Solution:
    def subarraysDivByK(self, nums: List[int], k: int) -> int:
        
        ans = prefixSum = 0
        mp = {}
        
        mp[prefixSum] = 1
        
        for i in range(len(nums)):
            
            prefixSum += nums[i]
            prefixSum %= k
            
            if prefixSum in mp:
                ans += mp[prefixSum]
                mp[prefixSum] += 1
                
            else:
                mp[prefixSum] = 1
                
        return ans;
        