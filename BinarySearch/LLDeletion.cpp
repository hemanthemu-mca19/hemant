/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* node, int target) {

    while(node->val == target){
        if(node->next == nullptr) return nullptr;
        else node = node->next;
    }
    
    LLNode* temp = node;
    LLNode* temp1;
    while(temp->next != nullptr) {
        if(temp->next->val != target) temp = temp->next;
        else{
            temp1 = temp->next;
            temp->next = temp->next->next;
            temp1 = nullptr;
        }
    }
    return node;
}
