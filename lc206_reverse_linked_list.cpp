/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        ListNode *pPrev = NULL;
        ListNode *pCur  = head;
        ListNode *pNext = NULL;

        while (pCur) {
                pNext = pCur->next;
                pCur->next = pPrev;
                pPrev = pCur;
                pCur = pNext;
        }
        return pPrev;
    }
};
