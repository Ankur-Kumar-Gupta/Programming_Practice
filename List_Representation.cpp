#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *newnode(int data)
{
	struct node*node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return(node);
}
void preorder(struct node*ptr)
{
	if(ptr!=NULL)
	{
		printf("%d",ptr->data);
		preorder(ptr->left);
		preorder(ptr->right);
	}
}
void postorder(struct node*ptr)
{
	if(ptr!=NULL)
	{
		postorder(ptr->left);
		postorder(ptr->right);
		printf("%d",ptr->data);
	}
}
void inorder(struct node*ptr)
{
	if(ptr!=NULL)
	{
		inorder(ptr->left);
		printf("%d",ptr->data);
		inorder(ptr->right);
	}
}
int main()
{
	struct node*root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	printf("\n Preorder :-\t");
	preorder(root);
	printf("\n Postorder :-\t");
	postorder(root);
	printf("\n Inorder :-\t");
	inorder(root);
	return 0;
}

