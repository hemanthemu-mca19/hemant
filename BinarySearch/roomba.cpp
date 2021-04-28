bool solve(vector<string>& moves, int x, int y) {
   int n = moves.size();
   int a=0, b=0;
   for(int i=0; i<n; i++) {
       if(moves[i]=="NORTH") b++;
       else if(moves[i]=="SOUTH") b--;
       else if(moves[i]=="EAST") a++;
       else a--;
   }
   if(a==x and b==y) return true;
   else return false; 
}
