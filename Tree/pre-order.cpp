#include<iostream>
using namespace std;
// class node
// {
//     public:int data;
//     class node *left,*right;
//     node(int d)

//     {
//         data = d;
//         left=NULL;
//         right=NULL;

//     }
// };
// node *create(node  *root)
// {
//     int x;
//     cout<<"enter the value\n";
//     cin>>x;
//     root = new  node(x);
//     if(x==-10)
//     {
//         return NULL;
//     }
//     cout<<"Enter the value for left node:"<<x<<"\n";
//     root->left=create(root->left);

//     cout<<"Enter value for right node:"<<x<<"\n";
//     root->right=create(root->right);

//     return root;
// }
// void pre(node *root)
// {
//     if(root==NULL)
//     {
//         return;
//     }
    
//     cout<<root->data<<"\t";
//     pre(root->left);
//     pre(root->right);
// }
// int main()
// {
//     node *root=NULL;
//     root=create(root);
//     pre(root);
// }

class node{
    public: int data;
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
    cout<<"Enter the value\n";
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
void pre(node *root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<"\t";
    pre(root->left);
    pre(root->right);
}
int main()
{
    node *root=NULL;
    root=create(root);
    pre(root);
}