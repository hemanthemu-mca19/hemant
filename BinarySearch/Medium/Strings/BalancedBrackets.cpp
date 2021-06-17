// https://binarysearch.com/problems/Balanced-Brackets

/**

Balanced Brackets

Medium

You're given a string s consisting solely of "(" and ")". Return whether the parentheses are balanced.

Constraints

    n ≤ 100,000 where n is the length of s.

Example 1
Input

s = "()"

Output

true

Example 2
Input

s = "()()"

Output

true

Example 3
Input

s = ")("

Output

false

Example 4
Input

s = ""

Output

true

Example 5
Input

s = "((()))"

Output

true

Example 6
Input

s = "((()"

Output

false

**/

// CODE

bool solve(string s) {
   if(s=="") return true;
   int n = s.size();
   if(n%2 == 1) return false;
   stack<char> st;
   for(auto c : s){
       if(c == '(') st.push(c);
       else {
           if(st.empty()) return false;
           else st.pop();
       }
   }
   return st.empty();
}
