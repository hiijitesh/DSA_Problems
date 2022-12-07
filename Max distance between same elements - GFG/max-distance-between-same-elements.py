class Solution:
    # Your task is to Complete this function
    # functtion should return an integer
    def maxDistance(self, arr, n):
        # Code here
        
        
        mp = {}
        max_dist = 0
        
        for i in range(n):
            
            if arr[i] not in mp.keys():
                
                mp[arr[i]] = i
            else:
                
                max_dist = max(max_dist, i - mp[arr[i]]);
                
                
        return max_dist



#{ 
 # Driver Code Starts
if __name__=='__main__':
    t = int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        ob=Solution()
        print(ob.maxDistance(arr, n))
# Contrbuted By:Harshit Sidhwa


# } Driver Code Ends