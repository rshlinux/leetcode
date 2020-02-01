/**
 * // This is the ImmutableListNode's API interface.
 * // You should not implement it, or speculate about its implementation.
 * class ImmutableListNode {
 * public:
 *    void printValue(); // print the value of the node.
 *    ImmutableListNode* getNext(); // return the next node.
 * };
 */

class Solution {
public:
    void printLinkedListInReverse(ImmutableListNode* head) {
        
        ImmutableListNode *pTemp = head;
        stack<ImmutableListNode*> ns;
        
        /* Iterate through the nodes, push them in a stack */
        while (pTemp) {
            ns.push(pTemp);
            pTemp = pTemp->getNext();
        }
        
        /* Empty the stack */
        while (!ns.empty()) { 
            pTemp = ns.top();
            ns.pop();
            pTemp->printValue();
        }
    }
};
