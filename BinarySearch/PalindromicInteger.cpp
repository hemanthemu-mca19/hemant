bool solve(int num) {
    if(num==0) return true;
    if(num%10 == 0) return false;
   int temp =0;
   while(temp<num){
       temp = temp*10+num%10;
       num /=10;
   }
   return (num==temp || num==temp/10); 
}
