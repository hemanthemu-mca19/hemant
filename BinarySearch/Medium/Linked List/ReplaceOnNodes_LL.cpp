// https://binarysearch.com/problems/Replace-Linked-List-on-Index

/**
Replace Linked List on Index
Medium

You are given two linked lists a and b as well as integers lo and hi.

Remove a's nodes from indices (0-indexed) [lo, hi] inclusive and insert b in this place.

Constraints

0 ≤ n ≤ 100,000 where n is the number of nodes in a
0 ≤ m ≤ 100,000 where m is the number of nodes in b
Example 1
Input
Visualize
a = [1, 2, 3, 4, 5, 6]
b = [10, 20, 30]
lo = 1
hi = 2
Output
Visualize
[1, 10, 20, 30, 4, 5, 6]
Explanation
We removed nodes 2 and 3 since their indices are in [1, 2]. In its place we inserted b.

Example 2
Input
Visualize
a = [1, 2, 3]
b = [10, 20, 30]
lo = 0
hi = 2
Output
Visualize
[10, 20, 30]
Explanation
We removed every node of a and inserted b.

**/

// CODE

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* a, LLNode* b, int lo, int hi) {
    if(a==nullptr || b==nullptr) return a;
    int k = 0;
    LLNode *temp1 = a, *temp2 = b, *prev = nullptr;
    while (k < lo) {
        prev = temp1;
        temp1 = temp1->next;
        k++;
    }
    if(lo == 0) a = b;
    else prev->next = b;
    while(k<=hi){
        temp1 = temp1->next;
        k++;
    }
    while(temp2->next){
        temp2 = temp2->next;
    }
    temp2->next = temp1;

    return a;
}
