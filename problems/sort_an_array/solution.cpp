class Solution {
public:
    
    void merge(vector<int> &nums, int mid, int start, int end){
        
        // get the length of left and right subarray
        int leftLen = mid - start + 1;
        int rightLen = end -mid;
        
        // create two subarray
        int *leftArr = new int[leftLen];
        int *rightArr = new int[rightLen];
        
        //copy the element from og array to these two array
        
        for(int i = 0; i < leftLen; i++){
            leftArr[i] = nums[start+i];
        }
        for(int i = 0; i < rightLen; i++){
            rightArr[i] = nums[mid+1+i];
        }
        
        //start merging
        int leftIdx = 0, rightIdx = 0, mergeIdx = start;
        
        while(leftIdx < leftLen && rightIdx < rightLen){
            
            if(leftArr[leftIdx] <= rightArr[rightIdx]){
                nums[mergeIdx] = leftArr[leftIdx];
                leftIdx++;
            }
            else{
                nums[mergeIdx] = rightArr[rightIdx];
                rightIdx++;
            }
            mergeIdx++;
            
        }
        
        //copy the remaining element of left
        while(leftIdx < leftLen){
            nums[mergeIdx] = leftArr[leftIdx];
            leftIdx++;
            mergeIdx++;
        }
        
        //copy the right element    
        while(rightIdx < rightLen){
            nums[mergeIdx] = rightArr[rightIdx];
            rightIdx++;
            mergeIdx++;
        }
        
        delete[] leftArr;
        delete[] rightArr;
        
    }
    
    void mergeSort(vector<int> &nums, int start, int end){
        if(start >= end){
            return;
        }
        
        int mid = (start+end)/2;
        mergeSort(nums, start, mid);
        mergeSort(nums, mid+1, end);
        merge(nums, mid, start, end);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size()-1);
        return nums;
    }
};