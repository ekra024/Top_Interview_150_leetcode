for(int i = 1; i <= right; i++) {
            if(i<=left){
                prev=slow;
                slow = slow->next;
            }
            fast = fast->next;
        }
        ListNode* target = NULL;
        if(fast != NULL) target=fast->next;
        fast=target;
