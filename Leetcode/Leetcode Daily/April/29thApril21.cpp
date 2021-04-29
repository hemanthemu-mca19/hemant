class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans(2,-1);
        for(int i=0; i<n; i++) {
            if(nums[i]==target){
                ans[0]=i;
                while(i<n and nums[i]==target) i++;
                ans[1]=i-1;
                break;
            }
        }
        return ans;
    }
};
