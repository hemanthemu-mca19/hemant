// https://leetcode.com/problems/rotate-list/

/**
Rotate List
Medium

2638

1170

Add to List

Share
Given the head of a linked list, rotate the list to the right by k places.

 

Example 1:


Input: head = [1,2,3,4,5], k = 2
Output: [4,5,1,2,3]
Example 2:


Input: head = [0,1,2], k = 4
Output: [2,0,1]
 

Constraints:

The number of nodes in the list is in the range [0, 500].
-100 <= Node.val <= 100
0 <= k <= 2 * 109


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
    ListNode* rotateRight(ListNode* head, int k) {
       if(head == nullptr || head->next == nullptr) return head;
        ListNode *front = head, *back = head;
        int count = 0;
        while(back) {
            count++;
            back = back->next;
        }
        k %= count;
        if(k==0) return head;
        
        while(k--){
            front = front->next;
        }
        
        back = head;
        while(front->next){
            back = back->next;
            front = front->next;
        }
        ListNode* res;
        res = back->next;
        back->next = nullptr;
        front->next = head;
        return res;
        
        
        
    }
};
