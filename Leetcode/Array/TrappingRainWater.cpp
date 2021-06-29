// https://leetcode.com/problems/trapping-rain-water/

/**
Trapping Rain Water
Hard

12162

174

Add to List

Share
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

 

Example 1:


Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.
Example 2:

Input: height = [4,2,0,3,2,5]
Output: 9
 

Constraints:

n == height.length
0 <= n <= 3 * 104
0 <= height[i] <= 105
**/

// CODE O(n)SC and O(2N)TC
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n<3) return 0;
        vector<int> temp(n,0);
        int lmax = 0;
        for(int i=0; i<n; i++) {
            if(height[i]>lmax) lmax = height[i];
            else
                temp[i] = lmax-height[i];        
        }
        int trapped_water = 0;
        int rmax = 0;
        for(int i=n-1; i>=0; i--){
            if(height[i]>rmax) {
                rmax = height[i];
                temp[i] = 0;
            }
            else
                temp[i] = min(rmax-height[i], temp[i]);
            trapped_water += temp[i];  
        }
       
        return trapped_water;
    }
};


// CODE O(N)TC O(1)SC

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n<3) return 0;
        
        int lmax = 0, rmax = 0;
        
        int trapped_water = 0;
        
        int left = 0, right = n-1;
       while(left < right) {
           if(height[left] <= height[right]){
               if(height[left] > lmax) lmax = height[left];
               else trapped_water += lmax-height[left];
               left++;
           }
           else {
               if(height[right] > rmax) rmax = height[right];
               else trapped_water += rmax-height[right];
               right--;
           }
       }
       
        return trapped_water;
    }
};
