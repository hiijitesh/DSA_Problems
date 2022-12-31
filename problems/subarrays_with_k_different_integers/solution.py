class Solution:
    def subarraysWithKDistinct(self, nums: List[int], k: int) -> int:
        
        return self.solve(nums, k) - self.solve(nums, k-1)
        
    def solve(self, s, k):
    
        ans = distCnt = release = 0
        mp = {}
        
        for aquire in range(len(s)):
            
            currChar = s[aquire]
            
            if currChar in mp:
                mp[currChar] += 1
                
                
            else:
                distCnt += 1
                mp[currChar] = 1
                
            while release <= aquire and distCnt > k:
                discardChar = s[release]
                mp[discardChar] -= 1
                
                release += 1
                
                if mp[discardChar] == 0:
                    del mp[discardChar]
                    distCnt -= 1
            ans += (aquire - release + 1)
        
        return ans
        