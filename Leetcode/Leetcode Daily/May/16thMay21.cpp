/** https://leetcode.com/explore/challenge/card/may-leetcoding-challenge-2021/600/week-3-may-15th-may-21st/3745/ **/

/**
Given a binary tree, we install cameras on the nodes of the tree. 

Each camera at a node can monitor its parent, itself, and its immediate children.

Calculate the minimum number of cameras needed to monitor all nodes of the tree.
**/

//CODE

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
    int camera = 0;
    int needCamera = -1;
    int covered = 1;
    int cameraCount = 0;
    
    
    int solve(TreeNode* root){
        
        if(root == nullptr) return 1;
        
        int lc = solve(root->left);
        int rc = solve(root->right);
        
        if(lc == needCamera || rc == needCamera) {
            cameraCount++;
            return camera;
        }
        
        if(lc == camera || rc == camera) 
            return covered;
        
        return needCamera;
    }
    int minCameraCover(TreeNode* root) {
        if(solve(root)==needCamera) cameraCount++;
        return cameraCount;
    }
};
