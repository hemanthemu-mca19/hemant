// https://leetcode.com/explore/challenge/card/june-leetcoding-challenge-2021/604/week-2-june-8th-june-14th/3772/

/**

Construct Binary Tree from Preorder and Inorder Traversal

Solution
Given two integer arrays preorder and inorder where preorder is the preorder traversal of a binary tree and inorder is the inorder traversal of the same tree, construct and return the binary tree.

 

Example 1:


Input: preorder = [3,9,20,15,7], inorder = [9,3,15,20,7]
Output: [3,9,20,null,null,15,7]
Example 2:

Input: preorder = [-1], inorder = [-1]
Output: [-1]
 

Constraints:

1 <= preorder.length <= 3000
inorder.length == preorder.length
-3000 <= preorder[i], inorder[i] <= 3000
preorder and inorder consist of unique values.
Each value of inorder also appears in preorder.
preorder is guaranteed to be the preorder traversal of the tree.
inorder is guaranteed to be the inorder traversal of the tree.

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
    **/

class Solution {
public:
    int curr_idx = 0;
    int search(vector<int> inorder, int start, int end, int ele) {
        for(int i = start; i<=end; i++){
            if(inorder[i]==ele) {
                // cout<<i <<" ";
                return i;
            }
        }
        return -1;
    }
    
    TreeNode* treeHelper(vector<int>& preorder, vector<int>& inorder, int start, int end){
        
       // base condition
        if(start > end){
            return nullptr;
        }
        int ele = preorder[curr_idx];
        curr_idx++;
        TreeNode* newNode = new TreeNode(ele);
         if(start == end) return newNode;
        
        
        int pos = search(inorder, start, end, ele);
        newNode->left = treeHelper(preorder, inorder, start, pos-1);
        newNode->right = treeHelper(preorder, inorder, pos+1, end);
        
        return newNode;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        //first element of preorder array is a guranteed root
        // we will traverse on preorder array and look for the element at current index in inorder array
        //elements to the left of current element are a part of left subtree and elements in right are part of right subtree
        
        int start = 0, end = preorder.size()-1;
        // cout << start << " "<<end;
         TreeNode* root = treeHelper(preorder, inorder, start, end);
        return root;
    }
};
