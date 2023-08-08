class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        //first need to store all the element into maxheap
        //get two element from heap then smash then , again putem into maxheap

        priority_queue<int> maxheap;

        for(auto &stone :stones)
            maxheap.push(stone);

        while(maxheap.size()>1){

            int s1 = maxheap.top();
            maxheap.pop();
            int s2 = maxheap.top();
            maxheap.pop();

            if(s1 > s2){
                s1 = s1 - s2;
                maxheap.push(s1);
            }
            else if(s2 > s1){
                s2 = s2 - s1;
                maxheap.push(s2);
            }
            else
                maxheap.push(0);
        }
        return maxheap.top();
    }
};