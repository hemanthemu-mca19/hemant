// https://www.interviewbit.com/problems/intersection-of-linked-lists/

/**

Intersection of Linked Lists
Asked in:  
Amazon
Microsoft
NetApp
Apache Design
Write a program to find the node at which the intersection of two singly linked lists begins.

For example, the following two linked lists:


A:          a1 → a2
                   ↘
                     c1 → c2 → c3
                   ↗
B:     b1 → b2 → b3

begin to intersect at node c1.

 Notes:
If the two linked lists have no intersection at all, return null.
The linked lists must retain their original structure after the function returns.
You may assume there are no cycles anywhere in the entire linked structure.
Your code should preferably run in O(n) time and use only O(1) memory.

**/

/**

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int m = 0, n = 0;
    ListNode* temp = A;
    while(temp != nullptr){
        m++;
        temp = temp->next;
    }
    temp = B;
    while(temp != nullptr) {
        n++;
        temp = temp->next;
    }
    int d = m - n;
    if(d<0){
        temp = A;
        A = B;
        B = temp;
    }
    d = abs(d);
    while(d>0){
        A = A->next;
        d--;
    }
    while(A != nullptr and B != nullptr){
        if(A == B) return A;
        A = A->next;
        B = B->next;
    }
    return nullptr;
}


**/
