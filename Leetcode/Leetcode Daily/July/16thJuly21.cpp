// https://leetcode.com/explore/challenge/card/july-leetcoding-challenge-2021/610/week-3-july-15th-july-21st/3816/
// 4Sum

// CODE
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
        // At this point we fixed one element i.e, nums[i]
            for(int j=i+1;j<n;j++)
            {
                // At this point we fixed two elements i.e, nums[i] and nums[j].
                // And now let us try to find remaining two numbers.
                // As we already fixed the nums[i] and nums[j],so now our range becomes [j+1,n-1].
                int st=j+1;
                int en=n-1;
                // Lets get the new Target i.e, target-nums[i]-nums[j]
                int sum = target-nums[i]-nums[j];
                while(st<en)
                {
                    if(nums[st]+nums[en]==sum)
                    {
                        ans.push_back({nums[i],nums[j],nums[st],nums[en]});
                        int third = nums[st];
                        int fourth = nums[en];
                        //Lets skip the duplicates for Third Element in Quadruple.
                        while(st<en and nums[st]==third)
                            st++;
                        //Lets skip the duplicates for Fourth Element in Quadruple.
                        while(st<en and nums[en]==fourth)
                            en--;
                     
                    }
                    else if(nums[st]+nums[en]>sum)
                        en--;
                    else
                        st++;
                }
                //Lets skip the duplicates for Second Element in Quadruple.
                while(j+1<n and nums[j+1]==nums[j])
                    j++;
            }
            //Lets skip the duplicates for First Element in Quadruple.
            while(i+1<n and nums[i+1]==nums[i])
                i++;
        }
        return ans;
    }
};
