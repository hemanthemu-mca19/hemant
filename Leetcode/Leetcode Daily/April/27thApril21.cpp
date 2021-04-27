class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n>0 and 3486784401 %n ==0) return true;
        else return false;
    }
};


//Alternate Method

bool isPowerOfThree(int n) {
	if(n < 1) return false;
	for(; n != 1; n /= 3) if(n % 3 != 0) return false;
	return true;
}
