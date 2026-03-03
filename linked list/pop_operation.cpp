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
void push_back(int val){
    node* newnode=new node(val);
    if(head==NULL){
        head=tail=newnode;
    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
}
void insert_mid(int val,int pos){
    node* newnode=new node(val);
    node* temp=head;
    for(int i=1;i<pos-1;i++){
        if(temp==NULL){
            return ;
        }
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    if(pos<0){
        return ;
    }
    if(pos==0){
        push_front(val);
    }
}
void pop_front(){
    if(head==NULL){
        cout<<"list is empty";
        return ;
    }
    node* temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
}
void pop_back(){
    if(head==NULL){
        cout<<"list is empty";
        return ;
    }
    node* temp=head;
    while(temp->next !=tail){
        temp=temp->next;
    }
    temp->next=NULL;
    delete tail;
    tail=temp;
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
    l.push_front(3);
    l.push_front(2);
    l.push_front(1);
    l.push_back(4);
    l.insert_mid(5,2);
    l.pop_front();
    l.pop_back();
    l.print();
    return 0;
}