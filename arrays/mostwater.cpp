#include<iostream>
using namespace std;
int marwater(int height[],int n){
    int maxwater=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int w=j-i;
            int ht=min(height[i],height[j]);
            int area=w*ht;
             maxwater=max(area,maxwater);
        }
    }
    return maxwater;
}
int main (){
    //time complexity in brute force approach is O(n^2)
    int height[]={1,3,5,6,2,8,9};
    int n=7;
    cout<<"maximum water contain in area"<<marwater(height,n)<<endl;
    return 0;
}
