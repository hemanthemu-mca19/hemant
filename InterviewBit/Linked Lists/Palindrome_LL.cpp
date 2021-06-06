// https://www.interviewbit.com/problems/palindrome-list/

/**

Palindrome List
Asked in:  
Amazon
Microsoft
Given a singly linked list, determine if its a palindrome. Return 1 or 0 denoting if its a palindrome or not, respectively.

Notes:

Expected solution is linear in time and constant in space.
For example,

List 1-->2-->1 is a palindrome.
List 1-->2-->3 is not a palindrome.

**/

// Code

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) {
    if(A==nullptr and A->next == nullptr) return 1;
    ListNode* slow = A, *fast = A;
    while(fast != nullptr and fast->next != nullptr){
        fast = fast->next->next;
        slow = slow->next;
    }
    
    ListNode *pre = nullptr, *nxt = nullptr;
    while(slow != nullptr){
        nxt = slow->next;
        slow->next = pre;
        pre = slow;
        slow = nxt;
    }
    slow = pre;
    ListNode *node = A;
    while(slow != nullptr and node != nullptr){
        if(slow->val != node->val) return 0;
        slow = slow->next;
        node = node->next;
    }
    return 1;
}
