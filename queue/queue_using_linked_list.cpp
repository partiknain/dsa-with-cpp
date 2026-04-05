#include<iostream>
#include<vector>
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
class queue{
  node* head;
  node* tail;
  public:
  queue(){
    head=tail=NULL;
  }
  void push(int val){
    node* newnode=new node(val);
    if(isempty()){
        head=tail=newnode;
    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
  }
  void pop(){
    if(isempty()){
        cout<<"ll is empty"<<endl;
        return ;
    }
    node* temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
  }
  int front(){
    return head->data;
  }
  bool isempty(){
    return head==NULL;
  }
};
int main (){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    while(!q.isempty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}