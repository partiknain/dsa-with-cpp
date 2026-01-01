#include<iostream>
using namespace std;
void mergsort(int arr[],int n,int arr1[],int m){
    int index=m+n-1;
    int i=n-1;
    int j=m-1;
    while(i>=0 && j>=0){
        if(arr[i]>arr1[j]){
            arr[index--]=arr[i--];
        } 
        else{
            arr[index--]=arr1[j--];
        }
    }
    while(j>=0){
        arr[index--]=arr1[j--];
    }
}
int main (){
    int arr[9]={2,3,4,7};
    int n=4;
    int arr1[]={1,5,6,8,9};
    int m=5;
    mergsort(arr,n,arr1,m);
    for(int i=0;i<n+m;i++){
        cout<<arr[i]<<endl;
    }
}
