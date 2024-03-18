#include<iostream>
using namespace std;

//Stack Implementation using Linked List;

class stacknode{
    public:
        int data;
        stacknode* next;
        stacknode(int c): data(c),next(nullptr){};
};



class stack{
    public:
    int size;
    stacknode* top;
    stack(){
        size=0;
        top=nullptr;
    } void push(int x){
        stacknode* newnode;
        newnode=new stacknode(x);
        if(top==nullptr){
            top=newnode;
        }else{
            newnode->next=top;
            top=newnode;
        }size++;
    } int pop(){
        if(top==nullptr){
            cout<<"Stack is empty";
        } 
        int x =top->data;
        top=top->next;
        size--;
        return x;
    } void isempty(){
        if(size==0){
            cout<<"The stack is empty.";
        }else{
            cout<<"The stack is not empty.";
        }
    }void traversal(){
        if(top==nullptr){
            cout<<"The stack is empty";
        }
        stacknode* current= top;
        while(current!=nullptr){
            cout<<current->data<<" ";
            current=current->next;
        }cout<<endl;
    }
};


int main(){
    stack s;
    s.push(4);
    s.push(5);
    s.push(6);
    s.traversal();
    
    }
