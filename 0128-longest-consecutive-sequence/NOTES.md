## Hashmap Approach
first will put every num in map with value true, true means num is starting of consecutive sequence.
​
if num = 5, so will check if num-1 = 4 exist in map then num = 5 cannot be starting point so we will mark it false, and move to the next elements
​
traverse again in map and check wich value is true,