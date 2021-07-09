// https://practice.geeksforgeeks.org/problems/pairs-with-given-xor1515/1#

/**
Pairs with given XOR 
Basic Accuracy: 60.67% Submissions: 89 Points: 1
Given an array A[]  of size N of distinct positive integers and a number X, find the number of pairs of integers in the array whose XOR is equal to X.


Example 1:

Input: 
N = 6
A[] = {5, 4, 10, 15, 7, 6}
X = 5
Output: 1
Explanation: (10 ^ 15) = 5

Example 2:

Input: 
N = 6
A[] = {3, 6, 8, 10, 15, 50}
X = 5
Output: 2
Explanation: (3 ^ 6) = 5 and (10 ^ 15) = 5 

Your Task:
You do not need to read input or print anything. Your task is to complete the function countpair() which takes the number N, array A[] and the value X as input parameters and returns the count of pairs.


Expected Time Complexity: O(N * LogN)
Expected Auxiliary Space: O(N)


Constraints:
1 ≤ N ≤ 103
1 ≤ A[i] ≤ 106
1 ≤ X ≤ 106
**/

// CODE
class Solution{
    public:
    int countPair(int N, int A[], int X){
        // code here
        int ans = 0;
        unordered_map<int, int> mp;
        
        for(int i=0; i<N; i++){
            int key = A[i]^X;
            if(mp.find(key) != mp.end()) ans += mp[A[i]^X];
            mp[A[i]]++;
       }
       return ans;
    }
};
