class Solution {
public:
    
    // int m=1337;
    
    int BinaryExpo(int a, int b ,int m) {

	int ans = 1;

	while (b) {
		if (b & 1)
			ans = (ans*1LL * a) % m;
		a = (a*1LL * a) % m;
		b >>= 1;

	}

	return ans;
}

    
    int superPow(int a, vector<int>& b) {
        
        int bmod=0;
        
        for( auto val: b){
            
            bmod= ( bmod*10 +val ) %1140;
        }
        
        return BinaryExpo( a,bmod, 1337);
        
        
    }
};