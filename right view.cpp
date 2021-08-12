class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int>result;
       if(root==NULL)
       return result;
       
       queue<Node*>q;
       q.push(root);
       while(!q.empty())
       {
           int n=q.size();
           
           for(int i=1;i<=n;i++)
           {
               Node* temp=q.front();
                q.pop();
               if(i==1)
               result.push_back(temp->data);
               if(temp->right!=NULL)
               q.push(temp->right);
               if(temp->left!=NULL)
               q.push(temp->left);
           }
       }
    }
};
