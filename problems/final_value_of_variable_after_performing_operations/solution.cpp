class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        
        int n=operations.size();
        int x=0;
        
        
         for(int i=0; i<n;i++){
             
              if(operations[i]== "X++")     x++;
             
              else if(operations[i]=="++X") ++x;
             
              else if(operations[i]=="--X")  --x;
             
              else if (operations[i]=="X--")  x--;
             
             
             
         }
        return x;
    }
};