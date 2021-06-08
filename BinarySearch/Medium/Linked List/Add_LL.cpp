// https://binarysearch.com/problems/Add-Linked-Lists

/**
Add Linked Lists
Medium

Given a singly linked list l0 and another linked list l1, each representing a number with least significant digits first, return the summed linked list.

Note: Each value in the linked list is guaranteed to be between 0 and 9.

Constraints

n ≤ 100,000 where n is the number of nodes in l0
m ≤ 100,000 where m is the number of nodes in l1
Example 1
Input
Visualize
l0 = [6, 4]
l1 = [4, 7]
Output
Visualize
[0, 2, 1]
Explanation
This is 46 + 74 = 120

**/

// CODE

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
int LinkedListSize(LLNode* head){
    int count = 0;
    while(head) {
        count++;
        head = head->next;
    }
    return count;
}
LLNode* solve(LLNode* l0, LLNode* l1) {
    if(l0 == nullptr) return l1;
    if(l1 == nullptr) return l0;

    int l0_size = 0, l1_size = 0;
    l0_size = LinkedListSize(l0);
    l1_size = LinkedListSize(l1);
    int diff = l0_size - l1_size;
    LLNode *temp;
    if(diff < 0) {
        temp = l0;
        l0 = l1;
        l1 = temp;
    }

    LLNode *temp0 = l0, *temp1 = l1, *prev;
    cout<<temp0->val <<" "<<temp1->val;
    int n0=0, n1=0, carry=0;
    while(temp1){
        n0 = temp0->val;
        n1 = temp1->val;
        n0 += (n1+carry);
        carry = n0/10;
        temp0->val = (n0 % 10);
        prev = temp0;
        temp0 = temp0->next;
        temp1 = temp1->next; 
    }
    diff = abs(diff);
    while(temp0){
        n0 = temp0->val;
        n0 += carry;
        temp0->val = n0%10 ;
        carry = n0/10;
        cout<<temp0->val<<" ";
        prev = temp0;
        temp0 = temp0->next;
    }
    if(carry > 0){
        LLNode* newNode = new LLNode(carry);
        prev->next = newNode;
    }
    return l0;
}
