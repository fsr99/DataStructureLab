#include<iostream>
using namespace std;
struct Node
{   int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void preorder(struct Node* Root)

{
    if(Root == NULL)
    {
        return;
    }
    cout<<Root->data<<" ";
    preorder(Root->left);
    preorder(Root->right);
}
void inorder(struct Node* Root)

{
    if(Root == NULL)
    {
        return;
    }
    inorder(Root->left);
    cout<<Root->data<<" ";
    inorder(Root->right);

}

void postorder(struct Node* Root)
{
    if(Root == NULL)
    {
        return;
    }
    postorder(Root->left);
    postorder(Root->right);
    cout<<Root->data<<" ";
}

int main()
{
    struct Node* Root=new Node(5);
    Root->left=new Node(8);
    Root->left=new Node(7);
    Root->right=new Node(18);
    Root->left->left=new Node(16);
    Root->right->right=new Node(7);
    Root->right->left=new Node(17);
    Root->left->right=new Node(23);
    cout<<"Pre Order:"<<endl;
    preorder(Root);
    cout<<endl;
    cout<<"In Order:"<<endl;
    inorder(Root);
    cout<<endl;
    cout<<"Post Order:"<<endl;
    postorder(Root);
    cout<<endl;
    return 0;
}
