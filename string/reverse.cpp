#include<iostream>
using namespace std;
void reverse(string str,int n){
    int beg=0;
    int end=n-1;
    while(beg<=end){
        swap(str[beg],str[end]);
        beg++;
       end--;
    }

}
int main (){
    string str="partik nain";
    int n=str.length();
    reverse(str,n);
    cout<<"string after reverse"<<str<<endl;
    return 0;
}
