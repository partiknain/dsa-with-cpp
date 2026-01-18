#include<iostream>
#include<climits>
using namespace std;
int rowssum(int matrix[][3],int rows,int cols){
    int maxsum= INT_MIN;
    for(int i=0;i<rows;i++){
        int sum=0;
        for(int j=0;j<cols;j++){
            sum+=matrix[i][j];
        }
        
        maxsum=max(maxsum,sum);
    }
    return maxsum;
}
int main (){
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int rows=3;
    int cols=3;
    cout<<"maximum sum of rows in matrix is"<<rowssum(matrix,rows,cols)<<endl;
}
