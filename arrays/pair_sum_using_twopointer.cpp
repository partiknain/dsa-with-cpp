#include<iostream>
#include<vector>
using namespace std;
vector<int>pairsum(vector<int>num,int target){
    vector<int>ans;
int n=num.size();
int i=0;
int j=n-1;
while(i<j){
    int pairsum=num[i]+num[j];
    if(pairsum>target){
        j--;}
    else if(pairsum<target){
        i++;}
    else{
        ans.push_back(i);
        ans.push_back(j);
        return ans;
    }
}

}
int main (){
    vector<int>num={1,2,3,4,5};
    vector<int>ans;
    int target=9;
     ans=pairsum(num,target);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;

}
