// https://binarysearch.com/problems/Rotate-Linked-List-by-K

/**
Rotate Linked List by K
Medium

Given a linked list node and a non-negative integer k, rotate the list to the right by k places.

Note: The linked list is guaranteed to have at least one element, and k is guaranteed to be less than or equal to the length of the list.

Constraints

k ≤ n ≤ 100,000 where n is the number of nodes in node
Example 1
Input
Visualize
node = [1, 2, 3, 4]
k = 2
Output
Visualize
[3, 4, 1, 2]
Example 2
Input
Visualize
node = [1, 2, 3, 4]
k = 4
Output
Visualize
[1, 2, 3, 4]
Example 3
Input
Visualize
node = [1, 2, 3, 4]
k = 0
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
LLNode* solve(LLNode* node, int k) {
    if(node == nullptr || node->next == nullptr) return node;
    int count = 0;
    LLNode *curr = node;
    while(curr != nullptr){
        count++;
        curr = curr->next;
    }
    
    k %= count;
    if(k==0) return node;
    curr = node;
    while(count-k-1>0){
        curr = curr->next;
        count--;
    }
    LLNode *newHead = curr->next;
    curr->next = nullptr;
    LLNode *temp = newHead;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = node;
    return newHead;
}
