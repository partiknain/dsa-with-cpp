#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
      int partition(vector<int> &arr,int st,int end){
        int index=st-1,pivot=arr[end];
        for(int j=st;j<end;j++){
            if(arr[j]<=pivot){
                index++;
                swap(arr[index],arr[j]);
            }
        }
        index++;
        swap(arr[end],arr[index]);
        return index;
      }
    void quicksort(vector<int> &arr,int st,int end){
        if(st<end){
            int pivotindex=partition(arr,st,end);
            quicksort(arr,st,pivotindex-1);
            quicksort(arr,pivotindex+1,end);
        }
    }
int main (){
    // time complexity of quick sort in average case is O(nlogn)
    // but time complexity of quick sort in worst case is O(n^2) when pivot is largest or smmalest element
      vector<int>arr={7,8,4,2,1,3,5};
      int st=0;
      int end=arr.size()-1;
      quicksort(arr,st,end);
      for(int val:arr){
        cout<<val<<" ";
      }
      return 0;
}