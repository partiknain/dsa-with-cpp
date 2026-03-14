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
class circularlist{
node* head;
node* tail;
public:
circularlist(){
    head=tail=NULL;
}
void push_front(int val){
    node* newnode=new node(val);
    if(head==NULL){
        head=tail=newnode;
        tail->next=head;
    }
    else{
        newnode->next=head;
        head=newnode;
        tail->next=head;
    }
}
void push_back(int val){
    node* newnode=new node(val);
    if(head==NULL){
        head=tail=newnode;
        tail->next=head;
    }
    else{
        tail->next=newnode;
        newnode->next=head;
        tail=newnode;
    }
}
void print(){
    if(head==NULL) return ;
    cout<<head->data<<"->";
    node* temp=head->next;
    while(temp!=head){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<temp->data<<"->NULL";
}
};
int main (){
    circularlist l;
    l.push_front(3);
    l.push_front(2);
    l.push_front(1);
    l.push_back(4);
    l.print();
    return 0;
}