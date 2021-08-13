vector <int> zigZagTraversal(Node* root)
{
   
	vector<int>result;
	 if(root==NULL)
	return result;
	//using two stacks
	stack<Node*>current_level;
	stack<Node*>next_level;
	
	bool left_to_right=true;
	current_level.push(root);
	while(!current_level.empty())
	{
	    Node* temp=current_level.top();
	    current_level.pop();
	    
	    if(temp)
	    {
	        result.push_back(temp->data);
	        
	    if(left_to_right)
	    {
	    if(temp->left)
	    next_level.push(temp->left);
	    if(temp->right)
	    next_level.push(temp->right);
	    }
	    else
	    {
	        if(temp->right)
	        next_level.push(temp->right);
	        if(temp->left)
	        next_level.push(temp->left);
	   }
	   }
	   if(current_level.empty())
	   {
	       left_to_right=!left_to_right;
	       swap(current_level,next_level);
	   }
	}
	return result;

	

}
