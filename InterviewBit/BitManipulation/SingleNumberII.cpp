//  https://www.interviewbit.com/problems/single-number-ii/

/**

Single Number II
Asked in:  
Google
Amazon
Given an array of integers, every element appears thrice except for one which occurs once.

Find that element which does not appear thrice.

Note: Your algorithm should have a linear runtime complexity.

Could you implement it without using extra memory?

Input Format:

    First and only argument of input contains an integer array A
Output Format:

    return a single integer.
Constraints:

2 <= N <= 5 000 000  
0 <= A[i] <= INT_MAX
For Examples :

Example Input 1:
    A = [1, 2, 4, 3, 3, 2, 2, 3, 1, 1]
Example Output 1:
    4
Explanation:
    4 occur exactly once
Example Input 2:
    A = [0, 0, 0, 1]
Example Output 2:
    1
    
    **/

// CODE 
// Approach: Using MAP

int Solution::singleNumber(const vector<int> &A) {
    unordered_map<int, int> mp;
    for (auto x : A) mp[x]++;
    for(auto x: mp) if(x.second == 1) return x.first;
    return 0;
}


// APProach 2

// USing Bit Manipulation

int Solution::singleNumber(const vector<int> &A) {
    int ans = 0, p=1, odd;
    for(int i=0; i<32; i++) {
        odd = 0;
        for(int j = 0 ; j < A.size(); j++) {
            int bit = p&A[j];
            if(bit != 0) odd++;
        }
        if(odd%3 != 0) ans+=p;
        p*=2;
    }
    return ans;
}
