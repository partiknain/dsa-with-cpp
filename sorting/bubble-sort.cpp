#include<iostream>
using namespace std;
void bubble (int arr[],int n){
    for (int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
}
}
int main (){
    int arr[]={2,7,5,4,1,8,9,3};
    int n=8;
    bubble(arr,n);
    for(int i=0;i<=n-1;i++){
        cout<<"array after selection sort"<<arr[i]<<endl;
    }
    return 0;
}
