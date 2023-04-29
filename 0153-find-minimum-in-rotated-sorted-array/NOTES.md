since array is rotated so we have to find in which direction we have to move.
​
we need minimum so we have to check nums[mid] >= nums[start] means left side is increasing order till mid so start = mid + 1., else  end = mid -1;
​