#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &arr,int start,int end,int mid){
    vector<int>temp;
    int i=start;
    int j=mid+1;
    while(i<=mid && j<=end){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
            i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
            j++;
    }
for(int index=0;index<temp.size();index++){
    arr[index+start]=temp[index];
}
}
  void mergesort(vector<int> &arr,int start,int end){
    if(start<end){
        int mid=start+(end-start)/2;
        mergesort(arr,start,mid);
        mergesort(arr,mid+1,end);
        merge(arr,start,end,mid);
    }
  }
int main (){
    vector<int>arr={31,2,5,21,4,13};
    int start=0;
    int end=arr.size();
    mergesort(arr,start,end);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
}