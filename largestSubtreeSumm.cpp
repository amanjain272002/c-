#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;
};

Node *newNode(int key)
{
    Node *temp = new Node;
    temp->key = key;
    temp->left = temp->right = NULL;
    return temp;
}


int findLargestSubtreeSum(Node* root)
{
    if (root == NULL)    
        return 0;
     
    int ans = INT_MIN;

    findLargestSubtreeSumUtil(root, ans);
 
    return ans;
}
 


int main()
{
    /*
            1
            / \
            /	 \
        -2	 3
        / \	 / \
        / \ / \
        4	 5 -6	 2
    */

    Node *root = newNode(1);
    root->left = newNode(-2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(-6);
    root->right->right = newNode(2);

    cout << findLargestSubtreeSum(root);
    return 0;
}
