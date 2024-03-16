#include <iostream>
using namespace std;

// Queue Implemantion using Linked List

class QueueNode{
    public:
        int data;
        QueueNode *next;
        QueueNode(int c)
        {
            data = c;
            next = nullptr;
        }
};

QueueNode *Front;
QueueNode *Rear;


//Rememeber the Front and rear pointer will be of queueNode class not of queue;
class Queue
{
public:
int size;
    Queue()
    {
        Front = Rear;
        size=0;
    }
    void enqueue(int data){
        QueueNode *temp;
        temp = new QueueNode(data);
        if (temp == nullptr)
        { 
            cout << "Queue is Full" << endl;
        }else{
            if(Front==nullptr){
                Front=temp;
                Rear=temp;
            }else{
                Rear->next=temp;
                Rear=Rear->next;
            }size++;
    }}void dequeue(){
        if(Front==Rear){
            Front=nullptr;
            Rear=nullptr;
        }else{
            QueueNode* head=Front;
            Front=Front->next;
            delete head;
        }
    } void traversal(){
        QueueNode* current=Front;
        while(current!=nullptr){
            cout<<current->data<<" ";
            current=current->next;
        }cout<<endl;
    } void frontval(){
        cout<<Front->data<<endl;
    } void endval(){
        cout<<Rear->data<<endl;
    }

};
 int main(){
    Queue q;
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.traversal();
    q.dequeue();
    q.traversal();
    q.frontval();
    q.endval();
 }