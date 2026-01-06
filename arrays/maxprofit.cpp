#include<iostream>
using namespace std;
int stock (int prices[],int n){
int maxprofit=0;
int bestbuy=prices[0];
for(int i=0;i<n;i++){
      if(prices[i]>bestbuy){
        maxprofit=max(maxprofit,prices[i]-bestbuy);
      }
      bestbuy=min(bestbuy,prices[i]);
}
return maxprofit;
}
int main (){
    int prices[]={7,1,2,3,6,5};
    int n=6;
    cout<<"max profit in this stock is"<<stock(prices,n)<<endl;
    return 0;
}