/** https://binarysearch.com/problems/Odd-Number-of-Digits **/

int solve(vector<int>& nums) {
    int odd =0;
    for(int i=0; i<nums.size(); i++){
        string temp;
        temp = to_string(nums[i]);
        if(temp.size()%2 != 0) odd++;
    }
    return odd;
}
