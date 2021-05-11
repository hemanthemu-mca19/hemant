/** https://leetcode.com/explore/challenge/card/may-leetcoding-challenge-2021/599/week-2-may-8th-may-14th/3739/ **/

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int total =0;
      for(auto x: cardPoints) total += x;  
        
        int n = cardPoints.size(), sum =0;
        
        for(int i=0; i<n-k; i++)    sum += cardPoints[i];
        
        int ans = total -sum, j=0;

        for(int i=n-k; i<n; i++){
            sum += (cardPoints[i]-cardPoints[j++]);
            ans = max(ans, total - sum);
        }
        
        return ans;
    }
};
