/* Solution for Leet Code Problem #2 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *l3 = NULL;

struct ListNode * createListNode(const int val) {
    
    struct ListNode *NewNode = 
        (struct ListNode *)malloc(sizeof(struct ListNode));
    if (!NewNode) {
        return NULL;
    }
    NewNode->next = NULL;
    NewNode->val = val;
    return NewNode;
}

void FreeList() {
    
    struct ListNode *pTemp = l3, *pNext = NULL;
    while(pTemp != NULL)
    {
        pNext = pTemp->next;
        free(pTemp);
        if (!pNext)
            break;
        pTemp = pNext;
    }
    l3 = NULL;
}

__inline__ void AddNewNode(struct ListNode *NewNode) {
    struct ListNode *pTemp = l3;
    if (l3 == NULL) {
        l3 = NewNode;
    } else {
        for (;pTemp->next;pTemp = pTemp->next);
        pTemp->next = NewNode;
    }
    NewNode->next = NULL;
}

__inline__ struct ListNode * Create_N_AddNode(int sum) {
    struct ListNode *NewNode = NULL;
    NewNode = createListNode(sum);
    if (!NewNode) {
        return NULL;
    }
    AddNewNode(NewNode);
    return NewNode;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    
    struct ListNode *pl1 = l1, *pl2 = l2;
    int sum = 0, carry = 0;
    FreeList();
    
    while (1) {
        if ((!pl1) && (!pl2)) {
            break;
        }
        sum = carry + ((pl1)?pl1->val:0) + ((pl2)?pl2->val:0);
        carry = 0;
        if (sum >= 10) {
            carry = sum / 10;
            sum = (sum % 10);
        }
        Create_N_AddNode(sum);
        pl1 = pl1?pl1->next:NULL;
        pl2 = pl2?pl2->next:NULL;
    }
    if (carry) {
        Create_N_AddNode(carry);
    }

    return l3;
}
