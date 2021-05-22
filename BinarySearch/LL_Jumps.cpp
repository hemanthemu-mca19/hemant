// https://binarysearch.com/problems/Linked-List-Jumps

/**

Linked List Jumps
You are given a singly linked list node containing positive integers. Return the same linked list where every node's next points to the node val nodes ahead. If there's no such node, next should point to null.

Constraints

n ≤ 100,000 where n is the number of nodes in node
Example 1
Input
Visualize
node = [2, 1, 4, 1]
Output
Visualize
[2, 4]
Explanation
Note that 2's next is 2 node ahead. 4's next is out of bounds, so it's set to null.



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
    if(node == nullptr) return node;
    LLNode* temp = node;
    LLNode* curr = node;
    int jump=0;
    while(temp != nullptr and temp->next != nullptr) {
       jump = curr->val;
       while(jump>0 and temp->next != nullptr){
           temp = temp->next;
           jump--;
       }
       if(jump==0){
           curr->next = temp;
           curr = temp;
       }
    }
    if(jump>0) curr->next = nullptr;
    return node;
}
