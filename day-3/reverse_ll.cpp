#include<iostream>
#include<vector>
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

    void reverse_ll(Node* head){
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;

        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
    }
};