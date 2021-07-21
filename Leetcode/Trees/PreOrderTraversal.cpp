// https://leetcode.com/problems/binary-tree-preorder-traversal/

/**
Binary Tree Preorder Traversal
Easy

2549

93

Add to List

Share
Given the root of a binary tree, return the preorder traversal of its nodes' values.

 

Example 1:


Input: root = [1,null,2,3]
Output: [1,2,3]
Example 2:

Input: root = []
Output: []
Example 3:

Input: root = [1]
Output: [1]
Example 4:


Input: root = [1,2]
Output: [1,2]
Example 5:


Input: root = [1,null,2]
Output: [1,2]
 

Constraints:

The number of nodes in the tree is in the range [0, 100].
-100 <= Node.val <= 100
**/

// Recursive code
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
class Solution {
public:
    vector<int> ans;
    vector<int> preorderTraversal(TreeNode* root) {
        if(!root) return ans;
        ans.push_back(root->val);
        if(root->left) preorderTraversal(root->left);
        if(root->right) preorderTraversal(root->right);
        
        return ans;
    }
};

//Iterative code
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> traversal;
        
        if(!root) return traversal;
            
        stack<TreeNode* > nodeStack;
        nodeStack.push(root);
        while( !nodeStack.empty() ) {
            TreeNode* curr = nodeStack.top();
            nodeStack.pop();
            traversal.push_back(curr->val);
            if(curr->right) nodeStack.push(curr->right);
            if(curr->left) nodeStack.push(curr->left);
        }
        return traversal;
    }
};
