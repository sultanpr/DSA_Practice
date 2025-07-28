#include <bits/stdc++.h>
using namespace std; 

class Node{
    public: 

    int val; 
    Node* left; 
    Node* right; 

    Node(int val)
    {
        this->val = val; 
        this->left = NULL; 
        this->right = NULL; 
    }
}; 

void preOrder(Node* root)
{
    if(root == NULL)
        return; 
    cout << root->val << " ";
    preOrder(root->left); 
    preOrder(root->right); 
}

int main()
{
    Node* root = new Node(10);
    Node* a = new Node(21); 
    Node* b = new Node(43); 
    Node* c = new Node(27); 
    Node* d = new Node(87); 
    Node* e = new Node(56); 

    root->left = a; 
    root->right = b;
    a->left = c; 
    a->right = d; 
    b->left = e; 

    preOrder(root); 

    return 0; 
}