/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
int solve(LLNode* node) {
    int cnt=0;
    while(node != nullptr) {
        cnt++;
        node = node->next;
    }
    return cnt;
}
