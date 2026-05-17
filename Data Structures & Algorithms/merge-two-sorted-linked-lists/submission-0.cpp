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
        ListNode* curr_1 = list1;
        ListNode* curr_2 = list2;
        ListNode* head = NULL;
        ListNode* curr = head;
        if(curr_1 == NULL)
            return list2;            
        if(curr_2 == NULL)
            return list1;
        while(curr_1 != NULL || curr_2 != NULL){
            if(curr_1 == NULL){
                curr->next = curr_2;
                break;
            }
            if(curr_2 == NULL){
                curr->next = curr_1;
                break;
            }
            if(curr_1->val <= curr_2->val){
                ListNode* curr_next = (ListNode*)malloc(sizeof(ListNode));
                curr_next->val = curr_1->val;
                curr_next->next = NULL;
                if(head == NULL){
                    head = curr_next;
                    curr = head;
                }
                else{
                    curr->next = curr_next;
                    curr = curr->next;
                }
                curr_1 = curr_1->next;
            }
            else{
                ListNode* curr_next = (ListNode*)malloc(sizeof(ListNode));
                curr_next->val = curr_2->val;
                curr_next->next = NULL;
                if(head == NULL){
                    head = curr_next;
                    curr = head;
                }
                else{ 
                    curr->next = curr_next;
                    curr = curr->next;
                }
                curr_2 = curr_2->next;
            }
        }
        return head;
    }
};
