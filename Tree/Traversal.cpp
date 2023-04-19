// PreOrder Traversal
vector<int>PreOrder(vector<int>&ans, TreeNode*root){
        if(root == NULL)return ans; //Base Case
  
        ans.push_back(root->val); // Pushing node value in vector
        solve(ans,root->left);  //Left call
        solve(ans,root->right); // Right call 
}

 

// Inorder Traversal
vector<int>Inorder(vector<int>&ans, TreeNode*root){
        if(root == NULL)return ans; //Base Case

        solve(ans,root->left);  //Left call
        ans.push_back(root->val); // Pushing node value in vector
        solve(ans,root->right); // Right call 
}



// PostOrder Traversal
vector<int>PostOrder(vector<int>&ans, TreeNode*root){
        if(root == NULL)return ans; //Base Case

        solve(ans,root->left);  //Left call
        solve(ans,root->right); // Right call 
        ans.push_back(root->val); // Pushing node value in vector
}


