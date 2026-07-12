#include<iostream>
#include<vector>
using namespace std;

class Stack{
    vector<int> v;
public: 
    void push(int data){
        v.push_back(data);
    }
    
    void pop(){
        if(!v.empty()){
            v.pop_back();
        }
    }
    
    int top(){
        return v.back();
    }
    
    bool empty(){
        return v.empty();
    }
};