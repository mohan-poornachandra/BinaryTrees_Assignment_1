#include<iostream>
using namespace std;

class Node{ //This is a binary tree node;
    public:
        int val;
        Node* left;
        Node* right;
        Node(int val=0){
            this->val = val;
            left = NULL;
            right = NULL;

        }
};
int Min(Node* root){

    if(root==NULL) return INT_MAX;

    return min( root->val, min(Min(root->left),Min(root->right)) );
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(-90);
    Node* f = new Node(6);
    Node* g = new Node(-100);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    cout<<"Min value: "<<Min(a)<<endl;

}