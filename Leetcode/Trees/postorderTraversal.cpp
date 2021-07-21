// https://leetcode.com/problems/binary-tree-postorder-traversal/

// code

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
    vector<int> traversal;
    vector<int> postorderTraversal(TreeNode* root) {
        
        if(!root) return traversal;
        if(root->left) postorderTraversal(root->left);
        if(root->right) postorderTraversal(root->right);
        traversal.push_back(root->val);
        return traversal;
    }
};

// iterative approach

class Solution {
public:
    
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> traversal;
        if(!root) return traversal;
        stack<TreeNode* > nodeStack;
        nodeStack.push(root);
        while(!nodeStack.empty()) {
        TreeNode* curr = nodeStack.top();
            nodeStack.pop();
            traversal.push_back(curr->val);
            if(curr->left) nodeStack.push(curr->left);
            if(curr->right) nodeStack.push(curr->right);
        }
        reverse(traversal.begin(), traversal.end());
        return traversal;
    }
};
