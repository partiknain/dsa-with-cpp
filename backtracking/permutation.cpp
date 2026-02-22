#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void getallperm(vector<int> arr,int index,vector<vector<int> > &ans){
    if(index== arr.size()){
        ans.push_back(arr);
    }
    for(int i=index;i<arr.size();i++){
        swap(arr[index],arr[i]);
        getallperm(arr,index+1,ans);
        swap(arr[index],arr[i]);
    }
}
int main (){
  vector<int>arr={1,2,3};
  vector<vector<int> > ans;
  getallperm(arr,0,ans);
  for(auto vec:ans){
  for(int val: vec){
    cout<<val<<" ";
  }
  cout<<endl;
  }
  return 0;
}