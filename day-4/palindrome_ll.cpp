#include<iostream>
#include<list>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
    Node* head;
    Node* tail;
public:
    List(){
        head = tail = NULL;
    }
    
    bool palindrome(Node* head){
        Node* slow = head;
        Node* fast = head;

        // Finding the middle of the linked list
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reversing the second half of the linked list
        Node* prev = NULL;
        Node* curr = slow;
        Node* next = NULL;

        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        // Comparing the first half and the reversed second half
        Node* first_half = head;
        Node* second_half = prev;

        while(second_half != NULL){
            if(first_half->data != second_half->data){
                return false; 
            }
            first_half = first_half->next;
            second_half = second_half->next;
        }
        return true;
    }
};