#include<stdio.h>

struct Node{
    int data;
    Node *left;
    Node *right;
};

Node *GetNewNode(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
Node *Insert(Node *root, int data)
{
    if(root == NULL)
    {
        root = GetNewNode(data);

    }
    else if(data <= root->data)
    {
        root->left = Insert(root->left,data);
    }
    else{
        root->right = Insert(root->right,data);
    }

    return root;
}
int Search(Node *root, int data){
     Node *temp=root;
     for(int i=0;temp!=NULL;i++){
      if (temp->data==data)return 1;
      else if (data<=temp->data)temp=temp->left;
      else  temp=temp->right;
     }
     return -1;
}

int main(){
    Node *root = NULL;
    root = Insert(root,24);
    printf("%d ",*root);
    root = Insert(root,15);
    printf("%d ",*root);
    root = Insert(root,90);
    printf("%d ",*root);
    root = Insert(root,76);
    printf("%d ",*root);
    if(Search(root,90)==true) printf("Found\n");
    else {printf("Not Found\n");}

}
