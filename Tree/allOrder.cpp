
#include<iostream>
using namespace std;

class node{
    public:int data;
    class node *left,*right;
    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};
node *create(node *root)
{
    int x;
    cout<<"enter the value:\n";
    cin>>x;
    root=new node(x);
    if(x==-10)
    {
        return NULL;
    }
    cout<<"Enter the value for left node:"<<x<<"\n";
    root->left=create(root->left);
    cout<<"Enter the value for right node:"<<x<<"\n";
    root->right=create(root->right);
}
void preOrder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<"\t";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    inOrder(root->left);
    cout<<root->data<<"\t";
    inOrder(root->right);
}
void postOrder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<"\t";
}

int main()
{
    node *root=NULL;
    root=create(root);
    cout<<"\nPre-Order:\n";
    preOrder(root);
    cout<<"\nIn-Order:\n";
    inOrder(root);
    cout<<"\nPost-Order:\n";
    postOrder(root);
    

}