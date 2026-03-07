#include<iostream>
using namespace std;
    class node{
        public:
int  data;
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
      node*newnode= new node( val);
      if(head==NULL){
        head=tail=newnode;
      }
      else{
      newnode->next=head;
      head=newnode;
      }
    }
    };
    node* middle(node* head){
         node* slow=head;
         node* fast=head;
         while(fast !=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
         }
         return slow;
    }
    int main (){
        list l;
        l.push(5);
        l.push(4);
        l.push(3);
        l.push(2);
        l.push(1);
       node*mid= middle(l.head);
       cout<<"middle of list is"<<mid->data;
       return 0;
}