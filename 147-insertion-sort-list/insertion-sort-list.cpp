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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* dummy = new ListNode();
        dummy->next = NULL;
        ListNode* curr = head;
        while (curr != NULL){
            ListNode* next_node = curr->next;
            ListNode* prev = dummy;

            while(prev->next != NULL && (prev->next->val < curr->val)){
                prev = prev->next;
            }

            curr->next = prev->next;
            prev->next = curr;
            curr = next_node;
        }

        return dummy->next;
        
    }
};