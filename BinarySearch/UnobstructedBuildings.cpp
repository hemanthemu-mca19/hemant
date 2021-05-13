/** https://binarysearch.com/problems/Unobstructed-Buildings **/

vector<int> solve(vector<int>& heights) {
    vector<int> ans;
    int n = heights.size()-1;
    if(n<0) return ans;
    ans.push_back(n);
    int mx = heights[n];
    for(int i=n-1; i>=0; i--){
        if(heights[i]>mx) ans.push_back(i), mx = heights[i];
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
