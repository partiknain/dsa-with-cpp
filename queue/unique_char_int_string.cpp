#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;
int uniquechar(string s){
    int n=s.size();
    unordered_map<char,int> m;
    queue<int>q;
    for(int i=0;i<n;i++){
        if(m.find(s[i])==m.end()){
            q.push(i);
        }
        m[s[i]]++;
        while(q.size()>0 && m[s[q.front()]]>1){
            q.pop();
        }
    }
    return q.empty()?-1:q.front();
}
int main(){
  string str="leetcode";
  int ans = uniquechar(str);  
  cout<<"unique character index is: "<<ans<<endl;
  return 0;
}