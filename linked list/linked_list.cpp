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
void push(int val){
    node* newnode=new node(val);
    if(head==NULL){
        head=newnode;
    }
    else{
        newnode->next=head;
        head=newnode;
    }
}
void print(){
        node* temp=head;
        while(temp!=NULL){
          cout<< temp->data<<" ->";
          temp=temp->next;
        }
        cout<<NULL;
    }
};
int main (){
    list l;
    l.push(1);
    l.push(2);
    l.push(3);
    l.print();
    return 0;
}