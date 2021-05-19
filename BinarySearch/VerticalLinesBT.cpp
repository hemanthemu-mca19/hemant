// https://binarysearch.com/problems/Vertical-Lines-in-Binary-Tree


/**
Vertical Lines in Binary Tree
Given a binary tree root, return the number of unique vertical lines that can be drawn such that every node has a line intersecting it. Each left child is angled at 45 degrees to its left, while the right child is angled at 45 degrees to the right.

For example, root and root.left.right are on the same vertical line.

Constraints

1 ≤ n ≤ 100,000 where n is the number of nodes in root
Example 1
Input
Visualize
root = [1, [2, [3, null, null], null], [4, null, [5, null, null]]]
Output
5
Explanation
There's a unique vertical line over every node.

Example 2
Input
Visualize
root = [1, null, [2, null, [3, null, [4, null, null]]]]
Output
4
**/

//  CODE

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

 void findMinMax(Tree* root, int *min, int *max, int hd){
     if(root == nullptr) return ;
     if(hd < *min) *min = hd;
     else if(hd > *max) *max = hd;

     findMinMax(root->left, min, max, hd-1);
     findMinMax(root->right, min, max, hd+1);
 }
int solve(Tree* root) {
    int max= 0, min=0;
    findMinMax(root, &min , &max, 0);
    cout<<max<<" "<<min;
    return max-min+1;
}
