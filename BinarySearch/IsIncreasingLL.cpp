/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
bool solve(LLNode* head) {
    while(head->next != nullptr) {
        if(head->next->val <= head->val) return false;
        else head = head->next;
    }
    return true;
}
