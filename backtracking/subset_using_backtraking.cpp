#include<iostream>
#include<vector>
using namespace std;
   void subset(vector<int>arr,int i,vector<int> &ans){
    if(i==arr.size()){
        for(int val :ans){
            cout<<val<<" ";
        }
        cout<<endl;
        return ;
    }
    ans.push_back(arr[i]);
    subset(arr,i+1,ans);
    ans.pop_back();
    subset(arr,i+1,ans);
   }
int main (){
    // time complexity is O(n*2^n).
    // space complexity is O(n*2^n) because we use a ans to store all subset so 2^n space for ans and n for recursive stack
    vector<int>arr={1,2,3};
    vector<int>ans;
    subset(arr,0,ans);
    return 0;
}