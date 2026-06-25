#include<iostream>
#include<vector>
using namespace std;
class node{
public:
int data;
node* left;
node* right;
node(int val){
    data=val;
    left=right=NULL;
}
};
static int index=-1;
node* buildtree(vector<int>&preorder){
    index++;
    if(preorder[index]==-1){
        return NULL;
    }
    node* root=new node(preorder[index]);
    root->left=buildtree(preorder);
    root->right=buildtree(preorder);
    return root;
}
int countofnodes(node* root){
    if(root==NULL){
        return 0;
    }
    int leftcount=countofnodes(root->left);
    int rightcount=countofnodes(root->right);
    return leftcount+rightcount+1;
}
int main(){
    vector<int>preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    node* root=buildtree(preorder);
    cout<<root->data<<endl;
    cout<<"Count of nodes in the tree: "<<countofnodes(root)<<endl;
    return 0;
}
