#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	struct node *left;
	int data;
	struct node *right;
}node;

struct node* newnode()
{
	struct node *new;
	new=(struct node*)(malloc(sizeof(struct node*)));
	int data;
	printf("Enter data: ");
	scanf("%d",&data);
	if (data==0) // Enter 0 for leaf node
	{
		return NULL;
	}


	new->data=data;
	
	printf("you are on left child of %d\n",data);
	new->left=newnode();
	printf("you are on right child of %d\n",data);
	new->right=newnode();
	return new;

}


void Inorder(struct node *temp)

{

    

    if(temp!=NULL)

    {

    Inorder(temp->left);

    printf(" \n%d",temp->data);

    Inorder(temp->right);

    }
    else
    	return;

}


int main()
{
	struct node* root;
	root=newnode();
	
	printf("Inorder traversal");
	Inorder(root);
	return 0;
}