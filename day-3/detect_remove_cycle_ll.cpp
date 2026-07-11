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
    
    // Detection 
    Node* detect_cycle_ll(Node* head){
        Node* slow = head;
        Node* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                return slow; 
            }
        }
        return NULL;
    }

    // Finding the starting point of the cycle
    Node* starting_point_of_cycle(Node* head){
        Node* slow = head;
        Node* fast = detect_cycle_ll(head);

        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }

    // Remove cycle
    Node* remove_cycle(Node* head){
        Node* slow = head;
        Node* fast = detect_cycle_ll(head);

        Node* prev = NULL;

        while(slow != fast){
            slow = slow->next;
            prev = fast;
            fast = fast->next;
        }
        prev->next = NULL;
        return slow; 
    }

};