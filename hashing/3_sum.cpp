#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>>triplet(vector<int>nums){
sort(nums.begin(),nums.end());
int n=nums.size();
vector<vector<int>>ans;
for(int i=0;i<n;i++){
    if(i>0 && nums[i]==nums[i-1]) continue;
    int j=i+1,k=n-1;
    while(j<k){
        int sum=nums[i]+nums[j]+nums[k];
        if(sum<0){
            j++;
        }
        else if(sum>0){
            k--;
        }
        else{
            ans.push_back({nums[i],nums[j],nums[k]});
            j++;
            k--;
            if(j<k  && nums[j]==nums[j+1])  j++;
        if(j<k  && nums[k]==nums[k-1])  k--;
            }
        }
    
    }
    return ans;
}
int main (){
    vector<int>nums={-1,1,2,3,4,-2};
    vector<vector<int>>ans=triplet(nums);
    for(auto &v:ans){
        cout<<"[";
        for(int x:v)  cout<<x<<" ";
        cout<<"]";
    }
return 0;
}
//time complexity = O(n^2 * log(unique trilets))
//space complexity = O(unique triplets +n)