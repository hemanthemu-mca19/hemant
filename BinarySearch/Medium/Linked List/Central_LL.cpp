// https://binarysearch.com/problems/Central-Linked-List

/**

Central Linked List
Medium

Given a singly linked list node, return the value of the middle node. If there's two middle nodes, then return the second one.

Bonus: Solve using \mathcal{O}(1)O(1) space.

Constraints

n ≤ 100,000 where n is the number of nodes in node
Example 1
Input
Visualize
node = [0, 1, 2]
Output
1

**/


// CODE

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
int solve(LLNode* node) {
    if(node->next == nullptr) return node->val;
    LLNode *fast = node, *slow = node;
    while(fast != nullptr and fast->next != nullptr){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow->val;
}
