// https://binarysearch.com/problems/Linked-List-Union

/**

Linked List Union
Medium

Given two sorted linked lists node0, and node, return a new sorted linked list containing the union of the two lists.

Constraints

0 ≤ n ≤ 100,000 where n is the number of nodes in node0
0 ≤ m ≤ 100,000 where m is the number of nodes in node1
Example 1
Input
Visualize
ll0 = [1, 3, 4]
ll1 = [2, 3, 4]
Output
Visualize
[1, 2, 3, 4]

**/

// CODE

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* ll0, LLNode* ll1) {
    LLNode* Union = nullptr;
    if(ll0 == nullptr) return ll1;
    if(ll1 == nullptr) return ll0;

    if(ll0->val <ll1->val){
        Union = ll0;
        Union->next = solve(ll0->next, ll1);
    }
    else if(ll0->val  == ll1->val){
        Union = ll0;
        Union->next = solve(ll0->next, ll1->next);
    }
    else {
        Union = ll1;
        Union->next  = solve(ll0, ll1->next);
    }
    return Union;
}
