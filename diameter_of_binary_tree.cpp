#include<iostream>
using namespace std;
struct node
{
    int data;
    node* right,*left;
};
node* newNode(int data)
{
    node* newnode=new node();
    newnode->data=data;
    newnode->right=newnode->left=NULL;
    return newnode;
}
 // Return max of following three for diameter
    // 1) Diameter of left subtree
    // 2) Diameter of right subtree
    // 3) Height of left subtree + height of right subtree + 1
int height(node* root)
{
    if(root==NULL)
    return 0;
    int lh=height(root->left);
    int rh=height(root->right);

    return 1+max(lh,rh);
}
int diameter(node* root)    
{
    if(root==NULL)
    return 0;
    
    int lh=height(root->left);
    int rh=height(root->right);
    int ld=diameter(root->left);
    int rd=diameter(root->right);

    return max(1+lh+rh,max(ld,rd));

}
int main()
{
 
    /* Constructed binary tree is
            1
            / \
        2     3
        / \
    4     5
    */
    struct node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
 
    // Function Call
    cout << "Diameter of the given binary tree is " <<
        diameter(root);
 
    return 0;
}