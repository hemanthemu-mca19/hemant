// https://leetcode.com/problems/balanced-binary-tree/

/**
110. Balanced Binary Tree
Easy

3922

244

Add to List

Share
Given a binary tree, determine if it is height-balanced.

For this problem, a height-balanced binary tree is defined as:

a binary tree in which the left and right subtrees of every node differ in height by no more than 1.

 

Example 1:


Input: root = [3,9,20,null,null,15,7]
Output: true
Example 2:


Input: root = [1,2,2,3,3,null,null,4,4]
Output: false
Example 3:

Input: root = []
Output: true
 

Constraints:

The number of nodes in the tree is in the range [0, 5000].
-104 <= Node.val <= 104
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
class Solution {
public:
    int compHeights(TreeNode* node, bool &ans) {
        if(node == nullptr) return 0;
        int leftHeight = compHeights(node->left, ans);
        int rightHeight = compHeights(node->right, ans);
        if(abs(leftHeight-rightHeight) > 1) ans = false;
        return 1+max(rightHeight, leftHeight);
        
    }
    bool isBalanced(TreeNode* root) {
        bool ans = true;
        compHeights(root, ans);
        return ans;
    }
};
