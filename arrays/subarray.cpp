#include<iostream>
using namespace std;
int main (){
    int n=5;
    int arr[]={1,2,3,4,5};
    for(int start=0;start<n;start++){
        for(int end=0;end<n;end++){
           for(int i=start;i<=end;i++){
            cout<<arr[i];
           }
           cout<<" ";
        }
        cout<<endl;
    }
  return 0;
  //time complexity in this problem is O(N^3)
}
