int solve(int n) {
   for(int i=0; i<n; i++){
       if(i*i==n) return i;
       else if(i*i>n) return i-1;
   }
   return 0; 
}
