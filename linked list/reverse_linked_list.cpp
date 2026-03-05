#include<iostream>
using namespace std;
class node{
public:
int data;
node* next;
node(int val){
    data=val;
    next=NULL;
}
};
class list{
public:
node* head;
node* tail;
list(){
    head=tail=NULL;
}
void push_front(int val){
    node* newnode=new node(val);
    if(head==NULL){
        head=tail=newnode;
    }
    else{
        newnode->next=head;
        head=newnode;
    }
}
void reverse(){
    node* prev=NULL;
    node* curr=head;
    node* Next=NULL;
    while(curr != NULL){
        Next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=Next;
    }
    head=prev;
}

void print(){
        node* temp=head;
        while(temp!=NULL){
          cout<< temp->data<<" ->";
          temp=temp->next;
        }
        cout<<"NULl";
    }
};
int main (){
    list l;
    l.push_front(1);
    l.push_front(2);
    l.push_front(3);
    l.reverse();
    l.print();
    return 0;
}