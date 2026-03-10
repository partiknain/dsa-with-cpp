#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int val){
        data=val;
        next=prev=NULL;
    }
};
class doublylist{
    node* head;
    node* tail;
    public:
    doublylist(){
        head=tail=NULL;
    }
    void push_front(int val){
        node* newnode=new node(val);
        if(head==NULL){
            head=tail=newnode;
        }
        else{
            newnode->next=head;
            head->prev=newnode;
            head=newnode;
        }
    }
    void push_back(int val){
        node* newnode=new node(val);
        if(head==NULL){
            head=tail=newnode;
        }
        else{
            newnode->prev=tail;
            tail->next=newnode;
            tail=newnode;
        }
    }
    void pop_front(){
        if(head==NULL){
            cout<<"list id empty";
        }
        else{
            node* temp=head;
            head=head->next;
            if(head!=NULL){
                head->prev=NULL;
            }
            temp->next=NULL;
            delete temp;
        }
    }
    void pop_back(){
        if(head==NULL){
            cout<<"list id empty";
        }
        else{
            node* temp=tail;
            tail=tail->prev;
            if(tail!=NULL){
                tail->next=NULL;
            }
            tail->prev=NULL;
            delete temp;
        }
    }
    void print(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"<=>";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }
};
int main (){
    doublylist l;
    l.push_front(3);
    l.push_front(2);
    l.push_front(1);
    l.push_back(4);
    l.pop_front();
    l.pop_back();
    l.print();
}