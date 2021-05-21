// https://binarysearch.com/problems/Level-Order-Binary-Tree-to-Linked-List

/**

Level Order Binary Tree to Linked List
Given a binary tree root, convert it to a singly linked list using level order traversal.

Constraints

1 ≤ n ≤ 100,000 where n is the number of nodes in root
Example 1
Input
Visualize
root = [1, [2, null, null], [3, [4, null, null], [5, null, null]]]
Output
Visualize
[1, 2, 3, 4, 5]
Example 2
Input
Visualize
root = [1, [0, null, null], [2, null, null]]
Output
Visualize
[1, 0, 2]

**/

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(Tree* root) {
    LLNode* head = new LLNode();
    if(root == nullptr) return head;
    
    LLNode* temp = head;
    queue<Tree* > q;

    q.push(root);

    while(!q.empty() ) {

        LLNode* newNode = new LLNode();
        temp->next = newNode;
        temp = temp->next;
        temp->val = q.front()->val;

        Tree* curr = q.front();
        q.pop();
        if(curr->left != nullptr) q.push(curr->left);
        if(curr->right != nullptr) q.push(curr->right);
    }
    return head->next;
}
