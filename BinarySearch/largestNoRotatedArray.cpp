// https://binarysearch.com/problems/Find-the-Largest-Number-in-a-Rotated-List/editorials/3223257

/**

Find the Largest Number in a Rotated List
You are given a list of unique integers nums that is sorted in ascending order and is rotated at some pivot point. Find the maximum number in the rotated list.

Can you solve it in \mathcal{O}(\log{}n)O(logn)?

Constraints

n ≤ 100,000 where n is the length of nums.
Example 1
Input
arr = [6, 7, 8, 1, 4]
Output
8
Explanation
The original sorted array of [1, 4, 6, 7, 8] was rotated at index 2 and results in the input array [6, 7, 8, 1, 4,]. And the largest number is 8.

**/

// CODE

int solve(vector<int>& arr) {
   int n = arr.size();
   int pivot = n-1;
   for(int i=1; i<n; i++) {
       if(arr[i]< arr[i-1]){
           pivot = i-1;
       }
   }
   return arr[pivot];
}

// Optimized Approach
/**

Intuition
Find the pivot of the rotated list,it will be the minimum element of the list.
Then return the element just before it.
If the pivot is at nums[0] then return nums[nums.size()-1] because technically it will be the just before element.

Implementation
set low as 0 and high as n-1.This will be the range between which we will search.
2.Then find the mid,and compare it to the nums[high].
3.If it is greater then our pivot will be on right side of it and we will update low=mid+1.
4.else it will be on left and we set high=mid.
Time Complexity
\mathcal{O}(\log n )O(logn) As we have used binary search and no sorting is done.

Space Complexity
\mathcal{O}(1)O(1) No new data structure is added so no additional space.
  **/

int solve(vector<int>& nums) {
    if (nums.size() == 1) return nums[0];
    int n = nums.size();
    int low = 0, high = n - 1;
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] > nums[high]) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    if (low == 0) return nums[n - 1];
    return nums[low - 1];
}
