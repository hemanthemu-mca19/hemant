// https://leetcode.com/explore/challenge/card/july-leetcoding-challenge-2021/611/week-4-july-22nd-july-28th/3826/

/**
Non-negative Integers without Consecutive Ones

Solution
Given a positive integer n, return the number of the integers in the range [0, n] whose binary representations do not contain consecutive ones.

 

Example 1:

Input: n = 5
Output: 5
Explanation:
Here are the non-negative integers <= 5 with their corresponding binary representations:
0 : 0
1 : 1
2 : 10
3 : 11
4 : 100
5 : 101
Among them, only integer 3 disobeys the rule (two consecutive ones) and the other 5 satisfy the rule. 
Example 2:

Input: n = 1
Output: 2
Example 3:

Input: n = 2
Output: 3
 

Constraints:

1 <= n <= 109

**/

// CODE
class Solution {
public:

int findIntegers(int n) {

    n++;
    int odd[34]={};
    int num=n;
    for(int i=0;i<32;i++)
    {
        odd[i]=num%2;
        num/=2;
    }
    int ans=0;
    int dp[34]={};
    dp[0]=1;
    dp[1]=2;
    for(int i=2;i<32;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    for(int i=31;i>=0;i--)
    {
        if(odd[i])
        {
            ans+=dp[i];
        }
        if(odd[i] && odd[i+1])
        {
            break;
        }
    }

    return ans;

	}
};
