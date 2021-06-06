// https://www.interviewbit.com/problems/sort-binary-linked-list/

/**
Sort Binary Linked List
Asked in:  
Amazon
Problem Description

Given a Linked List A consisting of N nodes.

The Linked List is binary i.e data values in the linked list nodes consist of only 0's and 1's.

You need to sort the linked list and return the new linked list.

NOTE:

Try to do it in constant space.


Problem Constraints
1 <= N <= 105

A.val = 0 or A.val = 1



Input Format
First and only argument is the head pointer of the linkedlist A.



Output Format
Return the head pointer of the new sorted linked list.



Example Input
Input 1:

 1 -> 0 -> 0 -> 1
Input 2:

 0 -> 0 -> 1 -> 1 -> 0


Example Output
Output 1:

 0 -> 0 -> 1 -> 1
Output 2:

 0 -> 0 -> 0 -> 1 -> 1


Example Explanation
Explanation 1:

 The sorted linked list looks like:
  0 -> 0 -> 1 -> 1
Explanation 2:

 The sorted linked list looks like:
  0 -> 0 -> 0 -> 1 -> 1


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
ListNode* Solution::solve(ListNode* A) {
    if(A == nullptr) return nullptr;
    ListNode* temp = A;
    int A0 = 0, A1  = 0;
    while(temp){
        if(temp->val == 0) A0++;
        else A1++;
        temp = temp->next;
    }
    temp = A;
    while(A0--){
        temp->val = 0;
        temp = temp->next;
    }
    while(A1--){
        temp->val = 1;
        temp = temp->next;
    }
    return A;
}
