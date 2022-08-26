class Solution {
public:
    // counts frequency of each digit in given number N and returns it as vector
vector<int> countDigits(int N){
	vector<int>digitsInN(10);
	while(N)
		digitsInN[N % 10]++, N /= 10;
	return digitsInN;
}
bool reorderedPowerOf2(int N) {
	vector<int> digitsInN = countDigits(N); // freq of digits in N
	// powOf2 goes from 2^0 to 2^29 and each time freq of digits in powOf2 is compared with digitsInN
	for(int i = 0, powOf2 = 1; i < 30; i++, powOf2 <<= 1)
		if(digitsInN == countDigits(powOf2)) return true;  // return true if both have same frequency of each digits
	return false;
}
};