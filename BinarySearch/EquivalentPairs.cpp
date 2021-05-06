int solve(vector<int>& nums) {
   if(nums.size()==0 || nums.size()==1) return 0;
   unordered_map<int,int> mp;
   for(int i=0; i<nums.size(); i++) {
       mp[nums[i]]++;
   }
   int sum=0;
   for(auto it:mp){
       sum += (it.second)*(it.second-1)*0.5;
   } 
   return sum;
}
