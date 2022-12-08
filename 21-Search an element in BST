//21-Search an element in BST
#include<stdio.h> 
#include<stdlib.h> 
struct node 
{ 
int data; 
struct node *left, *right; 
}; 
struct node *create (int data) 
{ 
struct node *newnode=(struct node*)malloc(sizeof(struct node)); 
newnode->data=data; 
newnode->left=NULL; 
newnode->right=NULL; 
return(newnode); 
} 
void inorder(struct node *root) 
{ 
if (root != NULL) 
{ 
inorder(root->left);  
printf("%d \n", root->data);  
inorder(root->right); 
} 
} 
struct node *search(struct node* root, int data) 
{ 
 if (root==NULL) 
 return NULL; 
 if(data==root->data) 
 return root; 
 if(data<root->data) 
 return search(root->left,data); 
 else  
 if(data>root->data) 
 return search(root->right,data); 
} 
int main() 
{ 
int data,res; 
struct node *root = create(4); 
root->left= create (2); 
root->right= create (5); 
root->left->left= create (1); 
root->left->right= create (3); 
root->right->right= create (6);  
inorder(root); 
printf("enter data to search:"); 
scanf("%d",&data); 
struct node *temp; 
temp=search(root,data); 
if(temp==NULL) 
printf("Element not found\n"); 
else 
printf("Element found");  
}
