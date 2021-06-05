// https://binarysearch.com/problems/Palindrome-Linked-List/

/**

Palindrome Linked List
Medium

Given a singly linked list node whose values are integers, determine whether the linked list forms a palindrome.

Constraints

n ≤ 100,000 where n is the length of node
Example 1
Input
Visualize
node = [5, 3, 5]
Output
true
Explanation
5 -> 3 -> 5 is a palindrome.

Example 2
Input
Visualize
node = [12, 8, 12]
Output
true
Explanation
The values of the linked list are the same forwards and backwards.

**/

// CODE
/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
bool solve(LLNode* node) {
    if(node == nullptr || node->next == nullptr) return true;
    LLNode *slow = node, *fast = node;
    while(fast != nullptr and fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    if(fast != nullptr){
        fast = fast->next;
        slow = slow->next;
    }
    LLNode *prev = nullptr, *nxt = nullptr;
    while(slow != nullptr){
        nxt = slow->next;
        slow->next = prev;
        prev = slow;
        slow = nxt;
    }
    slow = prev;
    LLNode* curr = node;
    while(slow != nullptr and curr != nullptr){
        if(curr->val != slow->val) return false;
        slow = slow->next;
        curr = curr->next;
    }
    return true;
}
