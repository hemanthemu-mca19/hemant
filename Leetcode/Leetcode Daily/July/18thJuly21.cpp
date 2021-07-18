// https://leetcode.com/explore/challenge/card/july-leetcoding-challenge-2021/610/week-3-july-15th-july-21st/3818/

/**
Reverse Nodes in k-Group

Solution
Given a linked list, reverse the nodes of a linked list k at a time and return its modified list.

k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.

You may not alter the values in the list's nodes, only nodes themselves may be changed.

 

Example 1:


Input: head = [1,2,3,4,5], k = 2
Output: [2,1,4,3,5]
Example 2:


Input: head = [1,2,3,4,5], k = 3
Output: [3,2,1,4,5]
Example 3:

Input: head = [1,2,3,4,5], k = 1
Output: [1,2,3,4,5]
Example 4:

Input: head = [1], k = 1
Output: [1]
 

Constraints:

The number of nodes in the list is in the range sz.
1 <= sz <= 5000
0 <= Node.val <= 1000
1 <= k <= sz
 

Follow-up: Can you solve the problem in O(1) extra memory space?


**/

// CODE


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
    int ListSize(ListNode *temp){
        int count = 0;
        while(temp){
            temp = temp->next;
            count++;
        }
        return count;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k==1 || head == nullptr) return head;
        int n = ListSize(head);
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode *pre = dummy, *curr, *nex;
        
        while(n >= k){
            curr = pre->next;
            nex = curr->next;
            for(int i=1; i<k; i++){
                curr->next = nex->next;
                nex->next = pre->next;
                pre->next = nex;
                nex = curr->next;
            }
            pre = curr;
            n -= k;
        }
        return dummy->next;
    }
};
