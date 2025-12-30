#include<iostream>
using namespace std;
int peakindex(int arr[],int n){
    int beg = 0;
    int end=n-1;
    while(beg<=end){
        int mid =beg+((end-beg)/2);
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
          return mid;
        }
        if(arr[mid]>arr[mid-1]){
            beg=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int main (){
    int arr[]={5,6,7,8,9,4,3,2,1};
    int n=9;
    cout<<"element at peak is at index "<<peakindex(arr,n)<<endl;
}
