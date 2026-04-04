#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int traprainwater(vector<int>&height){
    int n=height.size();
    int l=0;
    int r=n-1;
    int lmax=0;
    int rmax=0;
    int ans=0;
    while(l<r){
        lmax=max(lmax,height[l]);
        rmax=max(rmax,height[r]);
        if(lmax<rmax){
           ans+=lmax-height[l];
           l++;
        }
        else{
            ans+=rmax-height[r];
            r--;
        }
    }
    return ans;
}
int main (){
    //time complexity is O(n) ans space complexity is constant O(1)
    vector<int>height={4,2,0,3,2,5};
    int ans=traprainwater(height);
    cout<<"rainwater trap is :"<<ans;
}