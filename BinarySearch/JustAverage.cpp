bool solve(vector<int>& nums, int k) {
   map<int, int> mp;
   int sum =0;
   int n= nums.size();
   int avg = (n-1)*k;
   for(int i=0; i<n; i++){
       sum += nums[i];
       mp[nums[i]]++;
   }
   return (mp.find(sum-avg) != mp.end());
}

//Optimized Approach
bool solve(vector<int>& nums, int k) {
    int size = nums.size(), sum = 0;
    for (int i = 0; i < size; sum += nums[i++])
        ;

    for (int i = 0; i < size; i++)
        if (sum - nums[i] == k * (size - 1)) return true;

    return false;
}
