#User function template for Python

class Solution:	
	def binarysearch(self, arr, n, k):
		# code here
		
		start = 0
		end = n-1
		
		while start <= end:
		    
		    mid = start + (end - start) //2
		    
		    if k == arr[mid]:
		        return mid
		        
	        elif k > arr[mid]:
	            
	            start = mid +1
            else:
                
                end = mid -1
        
        return -1


#{ 
 # Driver Code Starts
#Initial template for Python

if __name__ == '__main__':
    t=int(input())
    for i in range(t):
        n=int(input())
        arr=list(map(int, input().strip().split(' ')))
        k=int(input())
        ob = Solution()
        print (ob.binarysearch(arr, n, k))


# } Driver Code Ends