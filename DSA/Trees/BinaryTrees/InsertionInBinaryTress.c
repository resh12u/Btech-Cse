#include<stdio.h>
#include<stdlib.h>
typedef struct node {
    int key;
    struct node *left,*right;

}node;

node *NewNode(int item){
    node *temp=(node*)malloc(sizeof(node));
    temp->key=item;
    temp->left=temp->right=NULL;
    return temp;
}

node *InsertNode(node*root,int key){
    if (root==NULL)
    {
        return NewNode(key);
       }
    if (root->key==key)
    { return(0);
       }
    if (root->key>key)
    {
        root->left=InsertNode(root->left,key);
       }
    if (root->key<key)
    {  root->right=InsertNode(root->right,key);
       }            
       return root;
    
}
void inorder(node *root){

    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->key);
        inorder(root->right);

    }
}
int main(){
    node *root=NULL;
    root = InsertNode(root,10);
    root=InsertNode(root,12);
     root=InsertNode(root,13);
      root=InsertNode(root,14);
       root=InsertNode(root,15);
    inorder(root);
 
}