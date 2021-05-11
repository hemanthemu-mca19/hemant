/**  https://binarysearch.com/problems/Max-Product-of-Two-Numbers **/

int solve(vector<int>& nums) {
    int min1, min2, max1, max2, n = nums.size();
    min1 = INT_MAX;
    min2 = INT_MAX;
    max1 = INT_MIN;
    max2 = INT_MIN;
    min1 = nums[0];
    max1 = nums[0];
    for (int i = 1; i < n; i++) {
        if (nums[i] > max1)
            max2 = max1, max1 = nums[i];
        else if (nums[i] > max2)
            max2 = nums[i];
        if (nums[i] < min1)
            min2 = min1, min1 = nums[i];
        else if (nums[i] < min2)
            min2 = nums[i];
    }
    int p1 = 0, p2 = 0;
    if (min1 != INT_MAX and min2 != INT_MAX) p1 = min1 * min2;
    if (max1 != INT_MAX and max2 != INT_MAX) p2 = max1 * max2;
    return max(p1, p2);
}
