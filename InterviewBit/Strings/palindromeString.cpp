// https://www.interviewbit.com/problems/palindrome-string/

/**
Palindrome String
Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

Example:

"A man, a plan, a canal: Panama" is a palindrome.

"race a car" is not a palindrome.

Return 0 / 1 ( 0 for false, 1 for true ) for this problem

**/

// CODE

int Solution::isPalindrome(string A) {
    string s = "";
    for(auto x : A){
        if(isalnum(x)) s += tolower(x);
        
    }
    if(s == "") return true;
    int l =0, r=s.size()-1;
    while(l<r){
        if(s[l] != s[r]) return false;
        else l++, r--;
    }
    return true;
}
