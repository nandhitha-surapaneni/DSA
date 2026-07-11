#include<iostream>
#include<list>
using namespace std;

class ListNode{
public:
    int data;
    ListNode* next;
    ListNode(int val){
        data = val;
        next = NULL;
    }
};

class Solution{
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;

        ListNode* head = NULL;
        ListNode* tail = NULL;

        if(list1->data < list2->data){
            head = tail = list1;
            list1 = list1->next;
        } else {
            head = tail = list2;
            list2 = list2->next;
        }

        while(list1 != NULL && list2 != NULL){
            if(list1->data < list2->data){
                tail->next = list1;
                tail = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                tail = list2;
                list2 = list2->next;
            }
        }

        if(list1 != NULL) tail->next = list1;
        if(list2 != NULL) tail->next = list2;

        return head;
    }
};