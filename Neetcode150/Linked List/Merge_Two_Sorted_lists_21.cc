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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* curradder = new ListNode();
        ListNode* returnhead = curradder;
        while (list1) {
            if (!list2) break;
            if (list1->val > list2->val) {
                curradder->next = list2;
                list2 = list2->next;
                curradder = curradder->next;
            } else {
                curradder->next = list1;
                list1 = list1->next;
                curradder = curradder->next;
            }
        }
        curradder->next = list1 ? list1 : list2;
        return returnhead->next;
    }
};