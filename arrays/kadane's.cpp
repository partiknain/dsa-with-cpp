#include<iostream>
using namespace std;
int main (){
    int n=5;
    int arr[]={1,-2,3,-4,5};
    int currsum=0 ;
    int maxsum=INT8_MIN;
    for(int i=0;i<n;i++){
      currsum=currsum+arr[i];
      maxsum=max(currsum,maxsum);
      if(currsum<0){
        currsum=0;
      }
    }
    cout<<"maximum sum ofsubarray is "<<maxsum<<endl;
    return 0;
}
