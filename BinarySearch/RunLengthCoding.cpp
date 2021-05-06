string solve(string s) {
   string run = "";
   int i=0, cnt, n= s.size();
   while(i<s.size()-1){
       cnt=1;
       while(s[i]==s[i+1] and i<s.size()-1) cnt++, i++;
        run += to_string(cnt);
        run += s[i++];
   }
   if(s[n-1]!= s[n-2]){
       run += to_string(1);
       run += s[n-1];
   }
   return run;
}
