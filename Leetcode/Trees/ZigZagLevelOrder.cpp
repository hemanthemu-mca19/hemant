// https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/

/**
103. Binary Tree Zigzag Level Order Traversal
Medium

3868

132

Add to List

Share
Given the root of a binary tree, return the zigzag level order traversal of its nodes' values. (i.e., from left to right, then right to left for the next level and alternate between).

 

Example 1:


Input: root = [3,9,20,null,null,15,7]
Output: [[3],[20,9],[15,7]]
Example 2:

Input: root = [1]
Output: [[1]]
Example 3:

Input: root = []
Output: []
 

Constraints:

The number of nodes in the tree is in the range [0, 2000].
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

// TC O(n)
// SC O(leaf nodes) extra
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int> > traversal;
        if(root == nullptr) return traversal;
        queue<TreeNode* > q;
        q.push(root);
        int count = 0;
        while(!q.empty()) {
            vector<int> temp;
            int n = q.size();
            for(int i=0; i<n; i++) {
                TreeNode* node = q.front();
                q.pop();
                temp.push_back(node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            if(count%2 == 1) reverse(temp.begin(), temp.end());
            count++;
            traversal.push_back(move(temp));
        }
        return traversal;
    }
};
