// https://www.interviewbit.com/problems/excel-column-title/

/**
Excel Column Title
Asked in:  
Amazon
Problem Description

Given a positive integer A, return its corresponding column title as appear in an Excel sheet.



Problem Constraints
1 <= A <= 1000000000



Input Format
First and only argument is integer A.



Output Format
Return a string, the answer to the problem.



Example Input
Input 1:

 A = 1
Input 2:

 A = 28


Example Output
Output 1:

 "A"
Output 2:

 "AB"


Example Explanation
Explanation 1:

 1 -> A
Explanation 2:

1 -> A
2 -> B
3 -> C
...
26 -> Z
27 -> AA
28 -> AB 

**/

//  CODE
string Solution::convertToTitle(int n) {
    string title = "";
    while(n>0){
        int r = n%26;
        if(r == 0) r = 26;
        char temp = (r-1) + 'A';
        title = temp + title;
        n = (n-r)/26;
    }
    return title;
}
