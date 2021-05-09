vector<int> solve(vector<int>& nums) {
    int n = nums.size();
    if(n==0 || n==1) return nums; 
    vector<int> ans; 
    unordered_map<int, int> mp;
    unordered_map<int, int> seen;
    for(int i=0; i<n; i++) mp[nums[i]]++;
    //for(auto x:mp) cout<<x.first<<" "<<x.second<< endl;                     
    int flag;                         
    for(int i=0; i<n; i++) {
        flag=0;
        if(seen.find(nums[i]) == seen.end()){
            ans.push_back(nums[i]);
            //seen[nums[i]]++;
            flag=1;
        }
        
        else if(mp[nums[i]] - seen[nums[i]]>1 and flag==0){
            ans.push_back(nums[i]);
        }
        seen[nums[i]]++;
    }

    return ans;
}
