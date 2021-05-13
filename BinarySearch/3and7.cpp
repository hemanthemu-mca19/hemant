/** https://binarysearch.com/problems/3-and-7 **/

bool solve(int n) {
   while (n>0){
       if(n%3==0 || n%7==0 || n%10==0) return true;
       else n -= 10;
   } 
   return false;
}
