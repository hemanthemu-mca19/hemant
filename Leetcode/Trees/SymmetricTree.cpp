// https://leetcode.com/problems/symmetric-tree/

/**
Symmetric Tree
Easy

6721

177

Add to List

Share
Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).

 

Example 1:


Input: root = [1,2,2,3,4,4,3]
Output: true
Example 2:


Input: root = [1,2,2,null,3,null,3]
Output: false
 

Constraints:

The number of nodes in the tree is in the range [1, 1000].
-100 <= Node.val <= 100
**/

// CODE
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */


// Recursive Solution
//TC O(n)
// SC O(height) Stack space
class Solution {
public:
    bool isMirror(TreeNode* left, TreeNode* right) {
        if(left == nullptr and right == nullptr) return true;
        
        // if any one of left or right is null
        if(left == nullptr || right == nullptr) return false;
        
        if(left->val != right->val) return false;
        
        return isMirror(left->left, right->right) && isMirror(left->right, right->left);
        
    }
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr) return true;
        return isMirror(root->left, root->right);
    }
};

//Iterative solution

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
    if(root==NULL) return true;
    queue<TreeNode*> queue;
    queue.push(root); queue.push(root);
    while(!queue.empty())
    {
        TreeNode* left = queue.front(); queue.pop();
        TreeNode *right = queue.front(); queue.pop();
        if(left==NULL && right==NULL) continue;
        if(left==NULL || right==NULL) return false;
        if(left->val != right->val) return false;
        queue.push(left->left);
        queue.push(right->right);
        queue.push(left->right);
        queue.push(right->left);
    }
    return true;  
    }
};

