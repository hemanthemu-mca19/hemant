https://www.interviewbit.com/problems/reverse-integer/

/**

Reverse integer
Asked in:  
HCL
Bloomberg
Reverse digits of an integer.

Example1:

x = 123,

return 321
Example2:

x = -123,

return -321

Return 0 if the result overflows and does not fit in a 32 bit signed integer

**/

// CODE
int Solution::reverse(int A) {
    int flag = 1;
    if(A < 0) {
        A = -1 * A;
        flag = -1;
    }
    long int rev = 0;
    while (A>0){
        int r = A%10;
        rev =rev *10 + r;
        A /= 10;
        if(rev > INT_MAX || rev < INT_MIN) return 0;
    }
    return flag * rev;
}
