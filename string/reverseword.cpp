#include<iostream>
#include<algorithm>
using namespace std;
string reverseword(string s1){
    int n=s1.length();
    string  ans="";
     reverse(s1.begin(),s1.end()); 
    for(int i=0;i<n;i++){
        string word="";
        while(i<n && s1[i] != ' '){
             word+=s1[i];
             i++;
        }
         reverse(word.begin(),word.end());
        if(word.length()){
            ans+=" "+word;
        }
    }
    return ans.substr(1);
}
int main (){
    string s="the plan";
    cout<<"string after reverse is :"<<reverseword(s)<<endl;
    return 0;
}