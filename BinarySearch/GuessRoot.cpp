int solve(int n) {
   for(int i=0; i<n; i++){
       if(i*i==n) return i;
       else if(i*i>n) return i-1;
   }
   return 0; 
}

//2nd Approach
/**
x^2 = 9
log x^2 = log 9
2 log x = log 9
log x = log 9 /2
x = exponential(log 9 / 2)
**/

//Code

int solve(int n) {
   int x = exp(log(n)/2);
   return x;
}
