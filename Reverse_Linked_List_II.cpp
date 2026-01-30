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
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == NULL || right==left)return head;
        ListNode dummy(0);
        dummy.next = head;
        ListNode * slow = &dummy;
        ListNode * fast = &dummy;
        ListNode * tmp = NULL;

        for(int i = 1; i <= right+1; i++) {
            if(i <= left) {
                tmp = slow;
                slow=slow->next;
            }
            fast = fast->next;
        }


        ListNode * cur = slow;
        ListNode * prev = fast;

        while(cur != fast){
            ListNode* nextNode = cur->next;
            cur->next=prev;
            prev = cur;
            cur = nextNode;

        }

        tmp->next = prev;

        return dummy.next;

    }
};
