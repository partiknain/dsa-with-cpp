#include<iostream>
using namespace std;
int sum(int n){
  if(n==1) {
    return 1;
  }
  return n+sum(n-1);
}
int main(){
  // time complexity is O(n)
  // space complexity is O(n)
  int n;
  cout<<"enter your number"<<endl;
  cin>>n;
  cout<<"sum from 1 to upto your number is"<<sum(n);
  return 0;
}
