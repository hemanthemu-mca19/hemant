// https://binarysearch.com/problems/Largest-K-Sublist-Sum

/**

Largest K Sublist Sum
You are given a list of integers nums, and an integer k, which represents a large list of nums concatenated k times. Return the sum of the sublist with the largest sum. The sublist can be empty.

Constraints

0 ≤ n ≤ 100,000 where n is the length of nums.
0 ≤ k ≤ 10,000
Example 1
Input
nums = [1, 3, 4, -5]
k = 1
Output
8
Explanation
We can take the sublist [1, 3, 4]

Example 2
Input
nums = [1, 3, 4, -5]
k = 2
Output
11
Explanation
We can take the sublist [1, 3, 4, -5, 1, 3, 4]

**/


// CODE

int kadanes(vector<int> &arr, int k) {
    long curr_sum = 0, max_so_far = 0;
    while(k--) {
        for(int i=0; i<arr.size(); i++){
            curr_sum = (curr_sum+arr[i] > arr[i]) ? curr_sum+arr[i] : arr[i];
            if(curr_sum > max_so_far) max_so_far = curr_sum;
            if(curr_sum < 0) curr_sum = 0;
        }
    }
    return max_so_far;
    
}
int solve(vector<int>& arr, int k) {
    if(arr.size() == 0 || k == 0) return 0;
    long arr_sum = 0;
    for(auto x : arr) arr_sum += x;
    if(k==1) return kadanes(arr, 1);
    int k2 = kadanes(arr, 2);
    if(k==2) return k2;
    long ans = (((k-2)*arr_sum)+k2);
    return (ans > k2) ? ans : k2;
}
