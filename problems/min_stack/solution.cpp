class MinStack {
public:
    int arr[100000];
    int topElement, capacity;
    MinStack() {
        topElement = -1;
        capacity = 100000;
    }
    void push(int val) {
        if(topElement == -1){
            topElement++;
            arr[topElement] = val;
            topElement++;
            arr[topElement] = val; 
        }
        else{
            int newMinimum = min(arr[topElement], val);
        
            topElement++;
            arr[topElement] = val;
            topElement++;
            arr[topElement] = newMinimum;
        } 
    }
    void pop() {
        topElement -= 2;
    }
    int top() {
        return arr[topElement-1];
    }
    int getMin() {
        return arr[topElement];
    }
};