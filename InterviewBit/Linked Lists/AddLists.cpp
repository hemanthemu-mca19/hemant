// https://www.interviewbit.com/problems/add-two-numbers-as-lists/

/**
Add Two Numbers as Lists
Asked in:  
Amazon
Qualcomm
Microsoft
Facebook
You are given two linked lists representing two non-negative numbers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8

    342 + 465 = 807
Make sure there are no trailing zeros in the output list
So, 7 -> 0 -> 8 -> 0 is not a valid response even though the value is still 807.

**/

// CODE
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 

ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    if(A ==  nullptr ) return B;
    if(B ==  nullptr ) return A;
    
    ListNode *temp1 = A, *temp2 = B, *pre;
    int sum = 0, carry = 0;
    while( temp1 != nullptr and temp2 != nullptr){
        int a = temp1->val;
        int b = temp2->val;
        sum = a + b + carry;
        temp1->val = (sum % 10);
        carry = sum/10;
        pre = temp1;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    if(temp1 == nullptr){
        pre->next = temp2;
    }
    temp1 = pre->next;
    while(temp1 != nullptr){
        int a = temp1->val;
        sum = a + carry;
        temp1->val = (sum % 10);
        carry = sum/10;
        pre = temp1;
        temp1 = temp1->next;
    }
    if(carry != 0){
        ListNode* newNode = new ListNode(carry);
        pre->next = newNode;
    }
    return A;
}
