// https://binarysearch.com/problems/Kth-Last-Node-of-a-Linked-List

/**

Kth Last Node of a Linked List
Medium

Given a singly linked list node, return the value of the kth last node (0-indexed). k is guaranteed not to be larger than the size of the linked list.

This should be done in \mathcal{O}(1)O(1) space.

Constraints

n ≤ 100,000 where n is the length of node
Example 1
Input
Visualize
node = [1, 2]
k = 1
Output
1
Explanation
The second last node has the val of 1

Example 2
Input
Visualize
node = [0, 1, 2, 3]
k = 2
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
int solve(LLNode* node, int k) {
    LLNode* forward = node, *backward = node;
    while(k--) forward = forward->next;
    while(forward->next != nullptr){
        forward = forward->next;
        backward = backward->next;
    }
    return backward->val;
}
