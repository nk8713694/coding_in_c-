#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

// Converting a BST into an Array
void BSTtoArray(Node *root, int A[])
{
    static int pos = 0;
    if(root == NULL) return;

    BSTtoArray(root->left, A);
    A[pos++] = root->data;
    BSTtoArray(root->right, A);

}

int treeSize(Node* root) {
    if(root == NULL) return 0;
    else
        return treeSize(root->left) + treeSize(root->right) + 1;
}

Node* Insert(Node *root, char data)
{
    if(root == NULL) {
        root = new Node();
        root->data = data;
        root->left = root->right =NULL;
    }
    else if(data <= root->data)
        root->left = Insert(root->left, data);
    else
        root->right = Insert(root->right, data);

    return root;
}

int main()
{
	Node* root = NULL;
	root = Insert(root,6);
	 root = Insert(root,3);
	root = Insert(root,28); 
	root = Insert(root,1);
	root = Insert(root,14); 
	root = Insert(root,7);
	root = Insert(root,14);
   root = Insert(root,23);
    root = Insert(root,28);
    int treeSZ = treeSize(root);
    int *A = new int[treeSZ];
    BSTtoArray(root, A);
	cout << "New Array : ";
	for(int i = 0; i < treeSZ; i++)
        cout << A[i] << " ";
	cout << endl;

}
