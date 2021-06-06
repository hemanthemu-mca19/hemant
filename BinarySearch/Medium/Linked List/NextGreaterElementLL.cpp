// https://binarysearch.com/problems/Next-Greater-Element-of-a-Linked-List

/**
Next Greater Element of a Linked List
Medium

Given a singly linked list node, replace every node's value with the first greater node's value to its right. If a node doesn't have a next greater node, set its value to 0.

Constraints

n ≤ 100,000 where n is the number of nodes in node
Example 1
Input
Visualize
node = [3, 2, 4, 5]
Output
Visualize
[4, 4, 5, 0]
Example 2
Input
Visualize
node = [1, 1, 1, 1]
Output
Visualize
[0, 0, 0, 0]

**/

//CODE

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */

LLNode* reverse(LLNode* temp) {
    LLNode *curr = temp, *nxt = nullptr, *prev = nullptr;
    while(curr){
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    return prev;
}
LLNode* solve(LLNode* node) {
    if(node == nullptr) return nullptr;
    node = reverse(node);
    LLNode *temp = node;
    stack<int> st;
    while(temp != nullptr){
        if(st.empty()){
            st.push(temp->val);
            temp->val = 0;
        }
        else {
            while( !st.empty() and st.top() <= temp->val){
                st.pop();
            }
            if(st.empty()){
                st.push(temp->val);
                temp->val = 0;
            }
            else {
                int x = st.top();
                st.push(temp->val);
                temp->val = x;
            }
        }
        temp = temp->next;
    }
    node = reverse(node);
    return node;
}
