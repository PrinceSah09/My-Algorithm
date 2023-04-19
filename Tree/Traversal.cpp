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



// LevelOrder Traversal
vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL)
            return {};

        queue<TreeNode*> q;
        vector<vector<int>> ans;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            vector<int> res;
            for(int i=0;i<size;i++)
            {
                TreeNode* temp=q.front();
                res.push_back(temp->val);
                q.pop();
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            ans.push_back(res);
        }
        return ans;
}
