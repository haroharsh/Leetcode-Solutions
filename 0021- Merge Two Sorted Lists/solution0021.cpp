#include <iostream>

/**
 * Definition for singly-linked list.
 */ struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode MergeList; //Crete a new List 
        ListNode* tail = &MergeList;
        //Traverse through both sorted list and add elements in the MergeList 
        while(list1 && list2){
            if(list1-> val <= list2->val){
                tail->next = list1;
                list1 = list1->next;
            }
            else{
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }
        //Check for the remaining elements
        if(list1 != nullptr){
            tail->next = list1;
        }
        else{
            tail->next = list2;
        }
        //Point to the head of MergeList
        return MergeList.next;
    }
};