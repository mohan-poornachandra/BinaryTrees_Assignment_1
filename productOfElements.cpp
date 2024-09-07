//I have to find the product of all elements in tree.

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

int product(Node* root){
    if(root == NULL) return 1;

    return root->val*product(root->left)*product(root->right);
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(1);
    Node* g = new Node(1);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    // display(a);
    // cout<<endl;
    cout<<"Product of all elements: "<<product(a)<<endl;

}