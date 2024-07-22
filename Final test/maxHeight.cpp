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
    cout<<"Enter the value";
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
    return root;
}
int maxHeight(node *node)
{
    if(node==NULL)
    {
        return 0;
    }
    else
    {
       int ldepth = maxHeight(node->left);
       int rdepth = maxHeight(node->right);

       if(ldepth>rdepth)
       {
        return(ldepth+1);
       }
       else
       {
        return (rdepth+1);
       }
    }
}
int main()
{
     node *root;
     root=create(root);
    cout<<"height of tree:"<<maxHeight(root);
}