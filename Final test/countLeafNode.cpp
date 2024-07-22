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
    cout<<"Enter the value:";
    cin>>x;
    root =new node(x);
    if(x==-10)
    {
        return NULL;
    }
    cout<<"Enter the value for left nodce:"<<x<<"\n";
    root->left=create(root->left);

    cout<<"Enter the value for right node:"<<x<<"\n";
    root->right=create(root->right);
    return root;
}
void leafNode(node *root)
{
    if(root==NULL)
    {
        return;
    }
    if(!root->left && !root->right)
    {
        cout<<root->data<<"\t";
    }
    if(root->left)
    {
        leafNode(root->left);
    }
    if(root->right)
    {
        leafNode(root->right);
    }
}
int main()
{
   node *root=NULL;
   root=create(root);
   leafNode(root);
}