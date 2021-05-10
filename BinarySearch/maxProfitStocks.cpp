int solve(vector<int>& prices) {
    int n=prices.size()-1;
    if(n<=0) return 0;
   int mx = prices[n];
   int ans =0, diff=0;
   while(n>0){
       diff = mx-prices[n-1];
       if(diff>0)
        ans = max(ans, diff);
       mx = max(mx, prices[n-1]);
       n--;
   } 
   return ans;
}
