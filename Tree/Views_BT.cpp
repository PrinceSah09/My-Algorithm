// Top View
void solve(vector<int>&ans, Node*root){
        map<int,int>mp;
        queue<pair<Node*, int>>q;
        q.push({root,0});
        while(!q.empty()){
            auto temp = q.front();
            q.pop();
            int hd = temp.second;
            Node*root = temp.first;
            
            if(mp.find(hd)==mp.end()){
                mp[hd] = root->data;
            }
            
            if(root->left){
                q.push({root->left,hd-1});
            }
            if(root->right){
                q.push({root->right,hd+1});
            }
        }
        for(auto it: mp){
            ans.push_back(it.second);
        }
    }
