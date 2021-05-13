/** https://binarysearch.com/problems/First-Fit-Room **/

int solve(vector<int>& rooms, int target) {
    for(auto x : rooms) if(x>=target) return x;
    return -1;
}
