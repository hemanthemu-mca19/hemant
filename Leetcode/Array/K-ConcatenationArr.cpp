// U7ON2T3WH57MMMMARVQHT5IOLB7ZDXOHFXAUEB3CQRDA66KLDUX3RXPE5E

/**

K-Concatenation Maximum Sum
Medium

572

50

Add to List

Share
Given an integer array arr and an integer k, modify the array by repeating it k times.

For example, if arr = [1, 2] and k = 3 then the modified array will be [1, 2, 1, 2, 1, 2].

Return the maximum sub-array sum in the modified array. Note that the length of the sub-array can be 0 and its sum in that case is 0.

As the answer can be very large, return the answer modulo 109 + 7.

 

Example 1:

Input: arr = [1,2], k = 3
Output: 9

**/

// code

class Solution {
public:
    int mod = 1000000007;
    int kadanes(vector<int> &arr, int k) {
        long curr_sum = 0, max_so_far = 0;
        while(k--) {
            for(int i=0; i<arr.size(); i++){
                curr_sum = (curr_sum+arr[i] > arr[i]) ? curr_sum+arr[i] : arr[i];
                if(curr_sum > max_so_far) max_so_far = curr_sum;
                if(curr_sum < 0) curr_sum = 0;
            }
        }
        return max_so_far % mod;
        
    }
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        if(arr.size() == 0 || k == 0) return 0;
        long arr_sum = 0;
        for(auto x : arr) arr_sum += x;
        arr_sum %= mod;
        if(k==1) return kadanes(arr, 1);
        int k2 = kadanes(arr, 2);
        if(k==2) return k2;
        long ans = (((k-2)*arr_sum)%mod+k2)%mod;
        return (ans > k2) ? ans : k2;
    }
};
