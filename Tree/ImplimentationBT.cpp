#include<bits/stdc++.h>
using namespace std; 

class Node{
public:
    int data;
    Node*left;
    Node*right;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildTree(Node* root){
    int value;
    cout<<endl<<"Enter data: ";
    cin>>value;
    
    root = new Node(value);
    if(value==-1)return NULL;
    
    cout<<"Enter Left of: "<<value<<": ";
    root->left = buildTree(root->left);
    
     cout<<"Enter right of: "<<value<<": ";
    root->right = buildTree(root->right);
    return root;
}

void levelOrder(vector<int>&v, Node*root){
    queue<Node*>q;
    q.push(root);
    
    while(!q.empty()){
        Node*temp = q.front();
        q.pop();
        v.push_back(temp->data);
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
} 

int main(){
    Node*root = NULL;
    Node*temp = buildTree(root);
    vector<int>v;
    levelOrder(v,temp);
    for(int it:v){
        cout<<it<<" ";
    }
}
