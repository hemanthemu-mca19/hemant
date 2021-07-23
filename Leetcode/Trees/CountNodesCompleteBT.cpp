// https://leetcode.com/problems/count-complete-tree-nodes/

/**
Count Complete Tree Nodes
Medium

Given the root of a complete binary tree, return the number of the nodes in the tree.

According to Wikipedia, every level, except possibly the last, is completely filled in a complete binary tree, and all nodes in the last level are as far left as possible. It can have between 1 and 2h nodes inclusive at the last level h.

Design an algorithm that runs in less than O(n) time complexity.

 

Example 1:


Input: root = [1,2,3,4,5,6]
Output: 6
Example 2:

Input: root = []
Output: 0
Example 3:

Input: root = [1]
Output: 1
 

Constraints:

The number of nodes in the tree is in the range [0, 5 * 104].
0 <= Node.val <= 5 * 104
The tree is guaranteed to be complete.
**/

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

// code
class Solution {
public:
    int countNodes(TreeNode* root) {
        int ans = 0;
        if(!root) return ans;
        queue<TreeNode* > q;
        q.push(root);
        bool flag = false;
        while(!q.empty()){
            int sz = q.size();
            while(sz--){
                TreeNode* curr = q.front();
                q.pop();
                ans++;
                if(!curr->left) {
                    flag = true;
                    break;
                }
                else q.push(curr->left);
                if(!curr->right) {
                    flag = true;
                    break;
                }
                else q.push(curr->right); 
            }
            if(flag == true) break;
        }
       return ans+q.size(); 
    }
};

// space optimized
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
    int countNodes(TreeNode* root) {
        if(!root) return 0;
        int left_levels = 1;
        int right_levels = 1;
        TreeNode *l = root->left, *r = root->right;
        while(l){
            left_levels++;
            l = l->left;
        }
        while(r){
            right_levels++;
            r = r->right;
        }
        if(left_levels == right_levels) {
            return pow(2,left_levels)-1;
        }
        
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};
