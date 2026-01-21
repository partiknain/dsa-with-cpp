#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
bool isduplicate(vector<int>nums){
int n=nums.size();
unordered_set<int>s;
for(int i=0;i<n;i++){
   if(s.find(nums[i])!=s.end()){
    return true;
   }
   s.insert(nums[i]);
}
return false;
}
int main(){
    vector<int>nums={2,3,4,5,2};
    cout<<isduplicate(nums);
    return 0;
}