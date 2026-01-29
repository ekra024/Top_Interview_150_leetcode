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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* tail = &dummy;
        int carry = 0, sum = 0;

        while(l1 != NULL && l2 != NULL) {
           sum = l1->val + l2->val + carry;

           ListNode * node = new ListNode();
           node->val = sum % 10;
           tail->next = node;

           carry = sum/10;

           tail = tail->next;
           l1 = l1->next;
           l2 = l2->next;
        }

        while(l1 != NULL) {
            sum = l1->val + carry;
            ListNode * node = new ListNode();
            node->val = sum%10;
            tail->next = node;

            carry = sum/10;
            tail = tail->next;
            l1 = l1->next;
        }

        while(l2 != NULL) {
            sum = l2->val + carry;
            ListNode * node = new ListNode();
            node->val = sum%10;
            tail->next = node;

            carry = sum/10;
            tail = tail->next;
            l2 = l2->next;
        }

        if(carry){
            ListNode * node = new ListNode();
            node->val = carry;
            tail->next = node;
            tail = tail->next;
        }


        return dummy.next;
    }
};
