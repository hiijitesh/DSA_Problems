class Solution {
    public void reverseString(char[] s) {
        Stack<Character> st = new Stack<Character>();
        
        for(int i = 0; i < s.length; i++){
            st.push(s[i]);
        }
        
        int i = 0;
        while(st.size() > 0){
            s[i++] = st.pop();
        }
    }
}