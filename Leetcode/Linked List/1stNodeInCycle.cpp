// https://leetcode.com/problems/linked-list-cycle-ii/

/**
Linked List Cycle II
Medium

4484

324

Add to List

Share
Given a linked list, return the node where the cycle begins. If there is no cycle, return null.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.

Notice that you should not modify the linked list.

 

Example 1:


Input: head = [3,2,0,-4], pos = 1
Output: tail connects to node index 1
Explanation: There is a cycle in the linked list, where tail connects to the second node.
Example 2:


Input: head = [1,2], pos = 0
Output: tail connects to node index 0
Explanation: There is a cycle in the linked list, where tail connects to the first node.
Example 3:


Input: head = [1], pos = -1
Output: no cycle
Explanation: There is no cycle in the linked list.
 

Constraints:

The number of the nodes in the list is in the range [0, 104].
-105 <= Node.val <= 105
pos is -1 or a valid index in the linked-list.

**/

// code
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


// O(N)space
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == nullptr) return head;
        unordered_set<ListNode*> s;
        ListNode* temp = head;
        while(temp) {
            if(s.find(temp) != s.end() ) return temp;
            s.insert(temp);
            temp = temp->next;
        }
        return nullptr;
    }
};

// O(1) space optimized

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == nullptr || head->next == nullptr) return nullptr;
        
        ListNode* slow = head, *fast = head;
        
        while(fast!=nullptr and fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast) {
                slow = head;
                while(slow and fast) {
                    if(slow == fast) return slow;
                    
                    slow = slow->next;
                    fast = fast->next;
                }
            }
        }

        return nullptr;
    }
};
