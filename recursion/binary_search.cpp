#include<iostream>
using namespace std;
  int binary_search(int arr[],int tar,int st,int end){
     if(st<=end){
        int mid =st+(end-st)/2;
        if(arr[mid]==tar) return mid;
        else if(arr[mid]>tar){
            return binary_search(arr,tar,st,mid-1);
        }
        else {
            return binary_search(arr,tar,mid+1,end);
        }
     }
     return -1;
  }
  int search(int arr[],int tar,int n){
    int st=0;
    int end=n-1;
    return binary_search(arr,tar,st,end);
  }
int main (){
    // time complexity is O(log n)
    // space complexity is O(log n)
    int arr[]={-1,2,4,5,7,9};
    int n=sizeof(arr);
    int tar=5;
    cout<<"element is found at index"<<search(arr,tar,n);
    return 0;
}