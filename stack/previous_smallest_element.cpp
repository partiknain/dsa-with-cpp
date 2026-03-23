#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main (){
    vector<int>arr={3,1,0,8,6};
    stack<int>s;
    vector<int>ans(arr.size(),0);
    int n=arr.size();
    for(int i=0;i<n;i++){
        while(s.size()>0&& s.top()>=arr[i]){
            s.pop();
        }
        if(s.empty()){
        ans[i]=-1;
        }
        else{
            ans[i]=s.top();
        }
        s.push(arr[i]);
    }
    for(int val:ans){
        cout<<val<<" ";
    }
    return 0;
}