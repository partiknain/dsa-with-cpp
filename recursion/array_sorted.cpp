#include<iostream>
using namespace std;
bool issorted(int arr[],int n){
    if(n==0 || n==1) return true;
    return arr[n-1]>=arr[n-2] && 
    issorted(arr,n-1);
}
int main (){
    int arr[]={1,2,3,4,5};
    int n = 5;
    cout<<issorted(arr,n);
    return 0;
}