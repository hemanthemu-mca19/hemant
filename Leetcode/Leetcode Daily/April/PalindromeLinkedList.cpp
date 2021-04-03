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
    void insert(vector<int>& arr, struct ListNode* p) {
        while(p != nullptr) {
            arr.push_back(p->val);
            p = p->next;
        }
    }
public:
    bool isPalindrome(ListNode* head) {
        vector<int> arr;
        insert(arr, head);
        
        //arr.push_back(head->val);
        int i=0, j=arr.size()-1;
        //for(int i=0; i<=j; i++) cout<< arr[i] << " ";
        while(i < j){
            if(arr[i] != arr[j]) return false;
            i++, j--;
        }
        return true;
    }
};
