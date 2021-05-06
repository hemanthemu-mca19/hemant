bool solve(string s0, string s1) {
   if(s0.size()-s1.size() != 1) return false;
   int i=0, j=0; 
   while(i<s0.size()){
       if(s0[i] != s1[j]) {
           i++;
          if(s0[i] != s1[j]) return false;
       }
       else i++, j++;
   }
   return true;
}

//Optimized Approach
bool solve(string s0, string s1) {
   if(s0.size()-s1.size() != 1) return false;
   int i=0; 
   while(i<s0.size()){
       if(s0[i] != s1[i]) break;
       else i++;
   }
   return ((s0.substr(0,i)==s1.substr(0,i))&&(s0.substr(i+1)==s1.substr(i)));
}
