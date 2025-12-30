#include<iostream>
using namespace std;
int linear(int num[],int target){
 int n=7;
 for (int i=0;i<n;i++){
    if(num[i]==target){
        return i;
    }
 }
}
int main (){
    int num[]={2,6,4,1,8,3,5};
    //when array is unsorted and time complexity is big o of n
    int target=3;
    cout<<"target in array is at index"<<linear(num,target)<<endl;
}
