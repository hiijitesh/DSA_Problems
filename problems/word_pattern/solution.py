class Solution:
    def wordPattern(self, p: str, s: str) -> bool:
        
        #convert the string s into the list
        s = s.split()
        
        if len(p)!=len(s): return False
        
        s2p, p2s = {}, {}
        
        for i in range(len(s)):
            
            if s[i] not in s2p:
                s2p[s[i]] = p[i]
            
            elif s2p[s[i]] != p[i]:
                return False
            
            if p[i] not in p2s:
                
                p2s[p[i]] = s[i]
                
            elif p2s[p[i]] != s[i]:
                return False
            
        return True
        