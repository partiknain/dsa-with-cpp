#include<iostream>
#include<vector>
#include<set>
using namespace std;
void findcombine(vector<int>arr,int i,int target,vector<int> & combine,vector<vector<int> > &ans,set<vector<int> > &s){
    if(target==0){
        if(s.find(combine)==s.end()){
        ans.push_back(combine);
        s.insert(combine);
    }
    return;
        }
    if(i==arr.size() || target<0) return ;
    combine.push_back(arr[i]);
    //single 
    findcombine(arr,i+1,target-arr[i],combine,ans,s);
    //multiple
    findcombine(arr,i,target-arr[i],combine,ans,s);
    combine.pop_back();
    findcombine(arr,i+1,target,combine,ans,s);
}
int main (){
    vector<int>arr={2,3,5};
    int target=8;
    vector<int>combine;
    vector<vector<int> > ans;
    set<vector<int> > s;
    findcombine(arr,0,target,combine,ans,s);
    for(auto vec:ans){
        for(int val:vec){
            cout<<val<<" ";
        }
        cout<< endl;
    }
}