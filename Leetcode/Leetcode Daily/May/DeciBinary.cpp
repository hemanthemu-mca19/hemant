// https://leetcode.com/explore/challenge/card/may-leetcoding-challenge-2021/601/week-4-may-22nd-may-28th/3756/

/**
class Solution {
public:
    int minPartitions(string n) {
        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
        int mx = 0;
        for(int i=0; i<n.size(); i++){
            mx = max(mx, n[i]-'0');
            if(mx == 9) return 9;
        }
        return mx;
    }
};

**/

// CODE

class Solution {
public:
    int minPartitions(string n) {
        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
        int mx = 0;
        for(int i=0; i<n.size(); i++){
            mx = max(mx, n[i]-'0');
            if(mx == 9) return 9;
        }
        return mx;
    }
};
