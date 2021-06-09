// https://binarysearch.com/problems/Swap-Kth-Node-Values

/**
Swap Kth Node Values
Medium

You are given a singly linked list node and an integer k. Swap the value of the k-th (0-indexed) node from the end with the k-th node from the beginning.

Constraints

1 ≤ n ≤ 100,000 where n is the number of nodes in node
0 ≤ k < n
Example 1
Input
Visualize
node = [1, 2, 3, 4, 5, 6]
k = 1
Output
Visualize
[1, 5, 3, 4, 2, 6]
Explanation
We swap 2 and 5.

Example 2
Input
Visualize
node = [0, 6, 8, 2, 9]
k = 2
Output
Visualize
[0, 6, 8, 2, 9]
Explanation
We swap 8 with 8.

**/

// CODE

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 **/
LLNode* solve(LLNode* node, int k) {
    if(node == nullptr) return node;
    int i = 0;
    LLNode* temp = node;
    while (i++ < k) {
        temp = temp->next;
    }
    LLNode* val1 = temp;
    LLNode* temp1 = node;
    while(temp->next){
        temp = temp->next;
        temp1 = temp1->next;
    }
    swap(val1->val , temp1->val);
    return node;
}
