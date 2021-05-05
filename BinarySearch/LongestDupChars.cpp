int solve(string s) {
    if(s.size()==0) return 0;
   int longst =1, count=1;
   for(int i=1; i<s.size(); i++) {
       if(s[i]==s[i-1]) count++;
       else {
           longst = max(longst, count);
           count=1;
       }
   } 
   return longst = max(longst, count);
}
