/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *   next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    
     ListNode * do_merge(ListNode *l1, ListNode *l2, ListNode *node) {
        
        bool is_l1 = false;
        ListNode *tmp = NULL;
        
        if (!l1 && !l2) {
            return l1;
        } else if ( ((!l1) && (l2)) ||
                   ((!l2) && (l1)) ) {
            if (!node) {
                node = l2?l2:l1;
            } else {
                node->next = l2?l2:l1;
                node = node->next;
            }
            if (l2)
                l2 = l2->next;
            else
                l1 = l1->next;
        } else if (l1 && l2) {
            if (l1->val <= l2->val) {
                tmp = l1;
                is_l1 = true;
            } else {
                tmp = l2;
            }
            if (!node) {
                node = tmp;
            } else {
                node->next = tmp;
                node = node->next;
            }
            tmp = tmp->next;
        }
        if (is_l1)
            do_merge(tmp, l2, node);
        else
            do_merge(l1, tmp, node);
        return node;
    }
    
    ListNode * mergeTwoLists(ListNode* l1, ListNode* l2) {
            
        ListNode *head = do_merge(l1, l2, NULL);
        return head;
    }
};
