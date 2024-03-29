#include<bits/stdc++.h>>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 

class Solution
{
  public:
  bool isSame(Node*T,Node*S){
        if(T==NULL && S==NULL)
        return true;
        if(T==NULL ||S==NULL)
        return false;
        if(T->data!=S->data)
        return false;
        
    return isSame(T->left,S->left) && isSame(T->right,S->right);
    }
    
    bool isSubTree(Node* T, Node* S) 
    {
        // Your code here
        if(T==NULL && S==NULL)
        return true;
        if(T==NULL || S==NULL)
        return false;
        
        return isSame(T,S)||isSubTree(T->left,S) || isSubTree(T->right,S);
        
    }
};