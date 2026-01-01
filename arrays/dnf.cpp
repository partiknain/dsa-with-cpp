#include<iostream>
using namespace std;
int dnf(int arr[],int n){
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
    if(arr[mid]==0){
        swap(arr[mid],arr[low]);
        low++;
        mid++;
    }
    else if(arr[mid]==1){
        mid++;
    }
    else  {
        swap(arr[mid],arr[high]);
        high--;
    }
}
}
int main (){
    int arr[]={1,1,1,0,0,2,2,0,1};
    int n=9;
    dnf(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
