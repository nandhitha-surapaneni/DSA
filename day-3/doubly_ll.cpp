// push_front, push_back, pop_front, pop_back, display

#include<iostream>
#include<list>
using namespace std;

class Node{
public: 
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class List{
    Node* head;
    Node* tail;

public: 
    List(){
        head = tail = NULL;    
    }
    
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
    
    void pop_front(){
        if(head == NULL){
            cout << "List is empty" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        if(head != NULL) {
            head->prev = NULL;
        } else {
            tail = NULL; // List is now empty
        }
        delete temp;
    }

    void pop_back(){
        if(head == NULL){
            cout << "List is empty" << endl;
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        if(tail != NULL) {
            tail->next = NULL;
        } else {
            head = NULL; // List is now empty
        }
        delete temp;
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};