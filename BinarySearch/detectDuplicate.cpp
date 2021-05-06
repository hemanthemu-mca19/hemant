int solve(vector<int>& nums) {
   int sum=0, n=nums.size();
   for(auto x: nums) sum += x;
   return sum - (n*(n-1)*0.5); 
}
