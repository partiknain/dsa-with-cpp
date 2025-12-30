#include<iostream>
using namespace std;
int binary(int arr[],int n,int target){
    int beg=0;
    int end=n-1;
    while(beg<end){
        int mid =beg+((end-beg)/2);
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid]<target){
            beg=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int main (){
int arr[]={1,2,5,6,8,9,10};
int n=7;
int target=2;
cout<<"num  in array is index at"<<binary(arr,n,target)<<endl;
return 0;
}
