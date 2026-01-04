#include<iostream>
using namespace std;
int fibo(int x){
    if(x<2){
        return x;
    }
    return fibo(x-1)+fibo(x-2);
}
int main (){
    int n;
    cout<<"enter number upto you want fibonacci series"<<endl;
    cin>>n;
    cout<<"fibonacci series is :"<<endl;
    for(int i=0;i<n;i++){
        cout<<fibo(i)<<endl;
    }
    return 0;
}