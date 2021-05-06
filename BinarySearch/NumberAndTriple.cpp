bool solve(vector<int>& nums) {
   map<int, int> mp;
   int n= nums.size(), temp;
   if(n==0 || n==1) return false;
   for(int i=0; i<n; i++){
       temp = 3*nums[i];
       if(mp.find(temp) != mp.end()) return true;
       mp[nums[i]]++;
   }
    for(int i=0; i<n; i++){
        temp = 3*nums[i];
        if(nums[i] != temp && mp.find(temp) != mp.end()) return true;
    }
    return false;
}
