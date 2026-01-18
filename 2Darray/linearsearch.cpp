#include<iostream>
using namespace std;
pair<int,int>linearsearch(int matrix[][3],int rows,int cols,int key){
    for (int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(matrix[i][j]==key){
              return{i,j};
            }
        }
    }
    
    return {-1,-1};
}
int main (){
    //time complexity is O(n)
    //linear search
    int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9}};
    int rows=4;
    int cols=3;
    int key=3;
    pair<int,int>ans = linearsearch(matrix,rows,cols,key);
    if(ans.first !=-1){
        cout<<"element in row"<<ans.first<<"columns"<<ans.second<<endl;
    }
    else{
        cout<<"element is not found"<<endl;
    }
    return 0;
}
