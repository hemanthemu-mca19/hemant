//  https://binarysearch.com/problems/Coincidence-Search

/**

You are given a list of unique integers nums. Return the number of integers that could still be successfully found using a standard binary search.

Binary search in pseudocode:

lo = 0
hi = nums.size - 1

while lo <= hi
    mid = floor((lo + hi) / 2)
    if nums[mid] == target
        return mid
    elif nums[mid] < target
        lo = mid + 1
    else
        hi = mid - 1

**/

// CODE

int BS(int target, vector<int> &nums) {
    int lo =0, hi = nums.size()-1;
    int mid;
    while(lo<=hi) {
        mid = floor((lo + hi) / 2);
    if (nums[mid] == target)
        return 1;
    else if (nums[mid] < target)
        lo = mid + 1;
    else
        hi = mid - 1;
    }
    return 0;
}

int solve(vector<int>& nums) {

   int count = 0;
    for(int i=0; i<nums.size(); i++) {
        count += BS(nums[i], nums);
    }
    return count;
}
