// https://leetcode.com/problems/remove-nth-node-from-end-of-list/

/**
Remove Nth Node From End of List
Medium

5826

327

Add to List

Share
Given the head of a linked list, remove the nth node from the end of the list and return its head.

 

Example 1:


Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
Example 2:

Input: head = [1], n = 1
Output: []
Example 3:

Input: head = [1,2], n = 1
Output: [1]
 

Constraints:

The number of nodes in the list is sz.
1 <= sz <= 30
0 <= Node.val <= 100
1 <= n <= sz

**/

// code

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == nullptr) return head;
        
        ListNode *backward = head, *forward = head;
        
        while(n > 0) {
            forward = forward->next;
            n--;
        }
        
        ListNode* prev = nullptr;
        while(forward != nullptr){
            prev = backward;
            forward = forward->next;
            backward = backward->next;
        }
        
        if(prev != nullptr) prev->next = prev->next->next;
        else head = head->next;
        
        return head;
    }
};
