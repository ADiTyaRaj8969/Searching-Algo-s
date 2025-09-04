#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(NULL), right(NULL) {}
};

Node* insert(Node* root, int val) {
    if (!root) return new Node(val);
    if (val < root->data) root->left = insert(root->left, val);
    else root->right = insert(root->right, val);
    return root;
}

bool treeSearch(Node* root, int x) {
    if (!root) return false;
    if (root->data == x) return true;
    if (x < root->data) return treeSearch(root->left, x);
    else return treeSearch(root->right, x);
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 50};
    Node* root = NULL;
    for (int v : arr) root = insert(root, v);

    int x = 40;
    if (treeSearch(root, x)) cout << "Found";
    else cout << "Not Found";
    return 0;
}
