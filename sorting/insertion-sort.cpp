#include<iostream>
using namespace std;
void insertion (int arr[],int n){
    for (int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
  while(prev>=00 && arr[prev]>curr){
    arr[prev+1]=arr[prev];
    prev=prev-1;
  }
  arr[prev+1]=curr;
    }
}
int main (){
    int arr[]={2,7,5,4,1,8,9,3};
    int n=8;
    insertion(arr,n);
    for(int i=0;i<=n-1;i++){
        cout<<"array after selection sort"<<arr[i]<<endl;
    }
    return 0;
}
