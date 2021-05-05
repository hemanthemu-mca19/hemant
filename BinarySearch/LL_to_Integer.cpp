/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
int solve(LLNode* node) {
    int no = node->val;
    while(node->next != nullptr){
        no <<= 1;
        no += node->next->val;
        node = node->next;
    }
    return no;
}
