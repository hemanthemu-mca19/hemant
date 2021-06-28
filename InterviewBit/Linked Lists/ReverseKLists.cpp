// https://www.interviewbit.com/old/problems/k-reverse-linked-list/

/**
K reverse linked list
Asked in:  
Microsoft
Amazon
Problem Setter: mihai.gheorghe Problem Tester: yashpal1995
Given a singly linked list and an integer K, reverses the nodes of the

list K at a time and returns modified linked list.

 NOTE : The length of the list is divisible by K 
Example :

Given linked list 1 -> 2 -> 3 -> 4 -> 5 -> 6 and K=2,

You should return 2 -> 1 -> 4 -> 3 -> 6 -> 5

Try to solve the problem using constant extra space.
**/

// CODE

// O(B) extra space


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A, int B) {
    if(A == nullptr || A->next == nullptr || B==1) return A;
    
    ListNode* dummy = new ListNode(0);
    dummy->next = A;
    
    ListNode *pre = dummy, *curr = A, *nex = nullptr;
    int count = 0;
    stack<ListNode* > st;
    while(curr){
        
        while(count++ < B){
            st.push(curr);
            curr = curr->next;
        }
        while(!st.empty()){
            pre->next = st.top();
            pre = pre->next;
            st.pop();
        }
        count = 0;
    }
    pre->next = nullptr;
    return dummy->next;
}

// CODE O(1) space
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == nullptr || k == 1) return head;
        
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode *prev = dummy, *curr = dummy, *nxt = dummy;
        
        int sz = 0;
        ListNode* temp = head;
        while(temp != nullptr) {
            temp = temp->next;
            sz++;
        }
        
        while(sz >= k) {
            curr = prev->next;
            nxt = curr->next;
            for(int i=1; i<k; i++) {
                curr->next = nxt->next;
                nxt->next = prev->next;
                prev->next = nxt;
                nxt = curr->next;
            }
            
            prev = curr;
            sz -=k;
        }
        return dummy->next;
    }
};
