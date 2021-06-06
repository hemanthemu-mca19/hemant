// https://www.interviewbit.com/problems/rotate-list/

/**

Rotate List
Asked in:  
Amazon
Given a list, rotate the list to the right by k places, where k is non-negative.

For example:

Given 1->2->3->4->5->NULL and k = 2,
return 4->5->1->2->3->NULL.

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
ListNode* Solution::rotateRight(ListNode* A, int B) {
    if(A==nullptr || A->next == nullptr) return A;
    ListNode *curr = A, *newHead = nullptr, *tail = nullptr;
    int count = 0;
    while(curr != nullptr){
        curr = curr->next;
        count++;
    }
    B %= count;
    
    if(B==0) return A;
    curr = A;
    B = count - B;
    while(B > 1) {
        curr = curr->next;
        B--;
    }
    newHead = curr->next;
    curr->next = nullptr;
    tail = newHead;
    while(tail->next != nullptr){
        tail = tail->next;
    }
    tail->next = A;
    return newHead;
}
