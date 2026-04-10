#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
	int val;
	struct TreeNode* left;
	struct TreeNode* right;
};
struct TreeNode* insertNode(struct TreeNode* root, int data) {
     if (root == NULL) {
        struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
        newNode->val = data;
        newNode->left = newNode->right = NULL;
        return newNode;
    }

    if (data < root->val)
        root->left = insertNode(root->left, data);
    else
        root->right = insertNode(root->right, data);

    return root;
}
void inorderTraversal(struct TreeNode* root) {
    if (root == NULL) {
        printf("The tree is empty");
        return;
    }

    if (root->left != NULL)
        inorderTraversal(root->left);

    printf("%d ", root->val);

    if (root->right != NULL)
        inorderTraversal(root->right);
}
void preorderTraversal(struct TreeNode* root) {
    if (root == NULL) {
        printf("The tree is empty");
        return;
    }

    printf("%d ", root->val);

    if (root->left != NULL)
        preorderTraversal(root->left);

    if (root->right != NULL)
        preorderTraversal(root->right);
}
void postorderTraversal(struct TreeNode* root) {
    if (root == NULL) {
        printf("The tree is empty");
        return;
    }

    if (root->left != NULL)
        postorderTraversal(root->left);

    if (root->right != NULL)
        postorderTraversal(root->right);
}
