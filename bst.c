#include <stdio.h>
#include <stdlib.h>
struct Node
 {
int data;
struct Node* left;
struct Node* right;
};
struct Node* newNode(int data) 
{
struct Node* node = (struct Node*)malloc(sizeof(struct Node));
node->data = data;
node->left = NULL;
node->right = NULL;
return node;
}
struct Node* insert(struct Node* root, int data)
 {
if (root == NULL) 
{
return newNode(data);
}
if (data < root->data) 
{
root->left = insert(root->left, data);
} else if (data > root->data) {
root->right = insert(root->right, data);
}
return root;
}
void preorder(struct Node* root) 
{
if (root != NULL) {
printf("%d ", root->data);   
preorder(root->left);      
preorder(root->right);       
}
}
void inorder(struct Node* root) 
{
if (root != NULL) 
{
inorder(root->left);         
printf("%d ", root->data);  
inorder(root->right);    
}
void postorder(struct Node* root) 
{
if (root != NULL)
 {
postorder(root->left);      
postorder(root->right);      
printf("%d ", root->data);   
}
}
int main() 
{
struct Node* root = NULL;
int n, value;
printf("Enter the number of elements to insert into the binary search tree: ");
scanf("%d", &n);
printf("Enter %d elements:\n", n);
for (int i = 0; i < n; i++)
 {
scanf("%d", &value);
root = insert(root, value);  
}
printf("Preorder traversal: ");
preorder(root);
printf("\n");
printf("Inorder traversal: ");
inorder(root);
printf("\n");
printf("Postorder traversal: ");
postorder(root);
printf("\n");
return 0;
}


