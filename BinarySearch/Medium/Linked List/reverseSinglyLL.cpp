// https://binarysearch.com/problems/Reverse-a-Linked-List

/**

Reverse a Linked List
Medium

Given a singly linked list node, return its reverse.

Bonus: Can you do this in \mathcal{O}(1)O(1) space?

Constraints

n ≤ 100,000 where n is the number of nodes in node
Example 1
Input
Visualize
node = [1, 2, 3, 4]
Output
Visualize
[4, 3, 2, 1]
Example 2
Input
Visualize
node = [0, 1]
Output
Visualize
[1, 0]


**/

// CODE
/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* node) {
    if(node == nullptr || node->next == nullptr) return node;
    LLNode* temp = node, *nxt = nullptr, *prev = nullptr;
    while(temp != nullptr){
        nxt = temp->next;
        temp->next = prev;
        prev = temp;
        temp = nxt;
    }
    node = prev;
    return node;
}
