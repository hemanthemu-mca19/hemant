// https://leetcode.com/problems/three-equal-parts/submissions/

/**
927. Three Equal Parts
Hard

363

73

Add to List

Share
You are given an array arr which consists of only zeros and ones, divide the array into three non-empty parts such that all of these parts represent the same binary value.

If it is possible, return any [i, j] with i + 1 < j, such that:

arr[0], arr[1], ..., arr[i] is the first part,
arr[i + 1], arr[i + 2], ..., arr[j - 1] is the second part, and
arr[j], arr[j + 1], ..., arr[arr.length - 1] is the third part.
All three parts have equal binary values.
If it is not possible, return [-1, -1].

Note that the entire part is used when considering what binary value it represents. For example, [1,1,0] represents 6 in decimal, not 3. Also, leading zeros are allowed, so [0,1,1] and [1,1] represent the same value.

 

Example 1:

Input: arr = [1,0,1,0,1]
Output: [0,3]
Example 2:

Input: arr = [1,1,0,1,1]
Output: [-1,-1]
Example 3:

Input: arr = [1,1,0,0,1]
Output: [0,2]
 

Constraints:

3 <= arr.length <= 3 * 104
arr[i] is 0 or 1
**/

// CODE
class Solution {
public:
    vector<int> threeEqualParts(vector<int>& arr) {
        vector<int> res = {-1, -1};
        int n = arr.size();
        int ones = 0;
        for(int i=0; i<n; i++) {
            if(arr[i] == 1) ones++;
        }
        //base cases
        if(ones%3 != 0) return res; //no of ones is not an multiple of 3
        if(ones == 0) return {0, 2}; // all zeroes
        
        int count = 0;
        int target = ones/3; // no of ones in each part
        
        int p1 = 0, p2, p3;
        for(int i=0; i<n; i++) {
            if(arr[i]==1) {
                count++;
                if(count == 1) p1 = i;
                else if(count == target+1) p2 = i;
                else if(count == 2*target+1) {
                    p3 = i;
                    break;
                }   
            }
        }
      
        //now check if 3 strings are possible or not
        int oldp2 = p2, oldp3 = p3;
        while(p3<n and p2<oldp3 and p1<oldp2){
            if(arr[p1] != arr[p3] || arr[p2] != arr[p3]) return res;
            p1++, p2++, p3++;
        }
        if(p3>=n) res = {p1-1, p2};
        return res;
    }
};
