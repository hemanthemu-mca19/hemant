bool solve(string s) {
   int n =s.size();
   if(n==0 || n==1) return true;
   map<char, int> mp;
   mp[s[0]]++;
   for(int i=1; i<n; i++) {
       if(mp.find(s[i]) != mp.end()) return false;
       mp[s[i]]++;
   } 
   return true;
}
