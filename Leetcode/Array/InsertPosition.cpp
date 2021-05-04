class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i;
        for(i=0; i<nums.size(); i++) {
            if(nums[i] == target) return i;
            else if(nums[i] > target) return i;
        }
        return i;
    }
};
//Binary Search Optimised Code
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1, mid;
        while(left <= right) {
            mid = (left+right)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target) right = mid-1;
            else left = mid+1;
        }
        return left;
    }
};
