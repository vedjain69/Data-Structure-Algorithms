#include<iostream>
using namespace std;

//Doubly Linked List creation, insertion, traversal, deletion, reversal

struct dll{
    int data;
    dll* prev;
    dll* next;
    dll(int x) : data(x), prev(nullptr), next(nullptr){};
    dll(int x, dll* back, dll* face): data(x), prev( back), next(face){};
};


//Traversal of linked list from the first node
void traversalfront( dll* head){
    if(head==nullptr){
        return;
    }while(head!=nullptr){
        cout<<head->data<<"->";
        head=head->next;
}cout<<endl;
}

//Traversal of linked list from the last node
void traversalback( dll* last){
    if(last==nullptr){
        return;
    }while(last!=nullptr){
        cout<<last->data<<"->";
        last=last->prev;
}cout<<endl;
}

//Insertion of new node at the end of the linked list.
dll* insertnode(dll* head, int x){
    dll* init = head;
    dll* newnode= new dll(x);
    while(head->next!=nullptr){
        head=head->next;
    }head->next=newnode;
    newnode->prev=head;
    return init;
}

//Deletion of the last node of the linked list.
dll* deletenodes(dll* head){
    dll* init =head;
    while(head->next!=nullptr){
        head=head->next;
    }
    dll* lastnode = head->prev;
    lastnode->next=nullptr;
    head->prev=nullptr;
    delete head;
    return init;
}

//Deletion of the First node of the linked list.
dll* deletehead(dll*head){
    dll*temp= head->next;
    head->next=nullptr;
    temp->prev=nullptr;
    delete head;
    return temp;
}

//Reversal of the doubly linked list.
dll* reverslinkedlist(dll* head){
    dll* back=nullptr;
    dll* next= head->next;
    while(head!=nullptr){
        next= head->next;
        head->prev=next;
        head->next=back; 
        back=head;
        head=next;
    }return back;
}


int main(){
     dll* head= new dll(4);
     dll* first =new dll(5);
     dll* second =new dll(6);
     dll* third =new dll(7);
     dll* fourth =new dll(8);
     head->prev=NULL;
     head->next=first;
     first->prev=head;
     first->next=second;
     second->prev=first;
     second->next=third;
     third->prev=second;
     third->next=fourth;
     fourth->prev=third;
     fourth->next=NULL;
     traversalfront(head);
     traversalback(fourth);
     head=insertnode(head, 101);
     traversalfront(head);
     head= deletenodes(head);
     traversalfront(head);
     head=deletehead(head);
     head=deletehead(head);
     head=deletehead(head);
     head=insertnode(head, 101);
     head=insertnode(head, 102);
     head=insertnode(head, 103);
     traversalfront(head);
     head=reverslinkedlist(head);
     traversalfront(head);
     head=reverslinkedlist(head);
     traversalfront(head);

}
