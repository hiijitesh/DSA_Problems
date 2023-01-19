class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        
        mp = {}
        for currStr in strs:
            
            arr = [0 for _ in range(26)]
            
            for currChar in currStr:
                
                currIdx = ord(currChar) - ord('a')
                arr[currIdx] +=1
                
            
            if tuple(arr) in mp:
                
                mp[tuple(arr)].append(currStr)
                
            else:
                mp[tuple(arr)] = [currStr]
                
        return list(mp.values())
        