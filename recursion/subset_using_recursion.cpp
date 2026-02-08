#include<iostream>
# include<vector>
using namespace std;
void findsubset(vector<int> &arr,vector<int> &ans ,int i){
    if(i==arr.size()){
        for(int val : ans){
            cout<<val<<" ";
        }
        cout<<endl;
        return ;
    }
        ans.push_back(arr[i]);
        findsubset(arr,ans,i+1);
        ans.pop_back();
        findsubset(arr,ans,i+1);
}
int main (){
    // time complexity is O(2^n * n) 
    vector<int>arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    vector<int>ans;
    findsubset(arr,ans,0);
    return 0;
}