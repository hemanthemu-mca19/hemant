int solve(vector<int>& prices) {
  if(prices.size()<2) return 0;
  int i=0, n = prices.size();
  int profit=0;
  while(i<n-1) {    //atleast two elements must be there for computation
    while((i<n-1) and prices[i+1]<= prices[i]) i++;
    if(i==n-1) break; //no point of purcahsing a stock on last day
    int buy = prices[i++];
    
    while((i<n) and prices[i-1]<=prices[i]) i++;
    int sell = prices[i-1];

    profit = profit - buy + sell;
  } 
  return profit;
}
