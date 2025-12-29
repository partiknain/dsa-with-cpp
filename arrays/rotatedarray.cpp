#include<iostream>
using namespace std;
int rottated(int arr[],int target,int n){
int start=0;
int end=n-1;
while(start<=end){
    int mid=start+((end-start)/2);
    if (arr[mid]==target){
        return mid;
    }
    if(arr[start]<arr[mid]){
        if(arr[start]<=target && target<=arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    else{
        if(arr[mid]<=target && target<=arr[end]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    
    }
}
return -1;
}
int main (){
    int arr[]={3,4,5,6,7,0,1,2};
    int n=8;
    int target=5;
    cout<<"element in rotated array is at index"<<rottated(arr,target,n)<<endl;
    return 0;
}