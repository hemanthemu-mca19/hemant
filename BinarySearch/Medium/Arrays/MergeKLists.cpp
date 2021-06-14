// GATXUWWYDFFHN4SK64F6H3X6UVUCRGMR6BXJ4JAPT2MMG5QI5VRQLQNE

/**

Merging K Sorted Lists
Medium

Given a list of sorted lists of integers, merge them into one large sorted list.

Constraints

0 ≤ n * m ≤ 100,000 where n is number of rows and m is the longest column in lists
Example 1
Input
lists = [
    [],
    [],
    [10, 12],
    [],
    [3, 3, 13],
    [3],
    [10],
    [0, 7]
]
Output
[0, 3, 3, 3, 7, 10, 10, 12, 13]

**/

// CODE

vector<int> solve(vector<vector<int>>& lists) {
    int k = lists.size();
    vector<int> results;

    for(int i=0; i<k; i++) {
        for(auto x : lists[i]) results.push_back(x);
    }
    sort(results.begin(), results.end());
    return results;
}
