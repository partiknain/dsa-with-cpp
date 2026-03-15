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
void push(int val){
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
void pop_front(){
    if(head==NULL) return ;
    else if(head==tail){
      delete head;
      head=tail=NULL;
    }
    else{
        node*temp=head;
        head=head->next;
        tail->next=head;
        temp->next=NULL;
        delete temp;
    }
}
void pop_back(){
    if(head==NULL) return ;
    else if(head==tail){
      delete head;
      head=tail=NULL;
    }
    else{
        node* temp=tail;
        node* prev=head;
        while(prev->next!=tail){
            prev=prev->next;
        }
       tail=prev;
       tail->next=head;
       temp->next=NULL;
       delete temp;
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
     cout<<temp->data;
}
};
int main (){
    circularlist l;
    l.push(4);
    l.push(3);
    l.push(2);
    l.push(1);
    l.pop_front();
    l.pop_back();
    l.print();
    return 0;
}