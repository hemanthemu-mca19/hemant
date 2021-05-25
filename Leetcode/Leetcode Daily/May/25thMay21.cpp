// https://leetcode.com/explore/challenge/card/may-leetcoding-challenge-2021/601/week-4-may-22nd-may-28th/3755/

/**
  Evaluate Reverse Polish Notation

Evaluate the value of an arithmetic expression in Reverse Polish Notation.

Valid operators are +, -, *, and /. Each operand may be an integer or another expression.

Note that division between two integers should truncate toward zero.

It is guaranteed that the given RPN expression is always valid. That means the expression would always evaluate to a result, and there will not be any division by zero operation.

 

Example 1:

Input: tokens = ["2","1","+","3","*"]
Output: 9
Explanation: ((2 + 1) * 3) = 9
**/

// CODE

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int num1, num2;
        for(auto& x : tokens){
            if(x == "+") {
                num1 = st.top();
                st.pop();
                num2 = st.top();
                st.pop();
                st.push(num1+num2);
            }
            else if(x == "-") {
                num1 = st.top();
                st.pop();
                num2 = st.top();
                st.pop();
                st.push(num2-num1);
            }
             else if(x == "*") {
                num1 = st.top();
                st.pop();
                num2 = st.top();
                st.pop();
                st.push(num1*num2);
            }
             else if(x == "/") {
                num1 = st.top();
                st.pop();
                num2 = st.top();
                st.pop();
                st.push(num2/num1);
            }
            else st.push(stoi(x));
        }
        return st.top();
    }
};
