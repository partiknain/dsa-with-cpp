#include<iostream>
using namespace std;
class circularqueue{
 int *arr;
 int currsize,cap;
 int r,f;
 public:
  circularqueue(int size){
    arr=new int[size];
    cap=size;
    currsize=0;
    f=0;
    r=-1;
  }
  void push(int data){
    if(currsize==cap){
        cout<<"queue is full"<<endl;
        return;
    }
    r=(r+1)%cap;
    arr[r]=data;
    currsize++;
  }
  void pop(){
    if(currsize==0){
        cout<<"queue is empty"<<endl;
        return;
    }
    f=(f+1)%cap;
    currsize--;
  }
  int front(){
    if(currsize==0){
        cout<<"queue is empty"<<endl;
        return -1;
    }
    return arr[f];
  }
   bool empty(){
    return currsize==0;
   }
};
int main(){
    circularqueue q(3);
    q.push(1);
    q.push(2);
    q.push(3);
    q.pop();
    q.push(4);
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}