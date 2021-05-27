// https://binarysearch.com/problems/Unique-Fractions

/**

Unique Fractions
You are given a list of lists fractions where each list contains [numerator, denominator] which represents the number numerator / denominator.

Return a new list of lists such that the numbers in fractions are:

In their most reduced terms. E.g. 8 / 6 becomes 4 / 3.
Any duplicate fractions that represent the same value are removed.
Sorted in ascending order by their value.
If the number is negative, the - sign should go to the numerator (the input also follows this).
Constraints

n ≤ 100,000 where n is the length of fractions
Example 1
Input
fractions = [
    [8, 4],
    [2, 1],
    [7, 3],
    [14, 6],
    [10, 2],
    [-3, 6]
]
Output
[
    [-1, 2],
    [2, 1],
    [7, 3],
    [5, 1]
]
Explanation
Once we reduce the numbers they become [[2, 1], [2, 1], [7, 3], [7, 3], [5, 1], [-1, 2]]. The result then comes from deduping and sorting by value.

**/

// CODE
vector<vector<int>> solve(vector<vector<int>>& fractions) {
    map<float, vector<int>> mp;
    vector<vector<int>> res;
    for(int i=0; i<fractions.size(); i++) {
        
        int x = __gcd(fractions[i][0], fractions[i][1]);
        if(x != 1) {
            fractions[i][0] /= x;
            fractions[i][1] /= x;
        }
        if(fractions[i][1] < 0) {
            fractions[i][0] = - fractions[i][0];
            fractions[i][1] = - fractions[i][1];
        }
        vector<int> temp;
        float val = fractions[i][0];
        val /= fractions[i][1];
        
        if(mp.find(val) == mp.end()) {
            temp.push_back(fractions[i][0]);
            temp.push_back(fractions[i][1]);
            mp[val] = temp;
        }
    }
    for (auto x : mp) {
        vector<int> t = {x.second[0], x.second[1]};
        res.push_back(move(t));
        
    }
    return res;
}
