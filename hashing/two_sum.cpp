#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int>findsum(vector<int>&arr,int target){
    vector<int>ans;
    unordered_map<int,int>m;
    int n=arr.size();
    for(int i=0;i<n;i++){
        int first=arr[i];
        int second=target-first;
        if(m.find(second)!=m.end()){
            ans.push_back(i);
            ans.push_back(m[second]);
            break;
        }
        m[first]=i;
    }
    return ans;
}
int main (){
    vector<int>arr={2,3,1,5,7};
    int target=9;
    vector<int>res = findsum(arr,target);
    for(int val:res){
        cout<<val<<endl;
    }
    return 0;
}