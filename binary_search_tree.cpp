#include<iostream>
using namespace std;

struct node
{
	int data;
	int p; //position
	node *left;
	node *right;
};
node *newNode(int data, int p)
{
	node* newnode=new node();
	newnode->data=data;
	newnode->p=p;
	newnode->left = NULL;
	newnode->right = NULL;
return newnode;
}
node *insert(node *root, int data, int p)
{
	if(root == NULL)
	{
		cout<<p<<endl;
		root = newNode(data, p);
	}
	else if(data < (root -> data))
	{
		root->left=insert(root->left,data,2*p);
	}
	else
	{
		root->right=insert(root->right,data,2*p+1);
	}
return root;
}
node *minimum(node *root)
{
	node *temp = root;
	while(temp && temp -> left != NULL)
	temp = temp -> left;
	return temp;
}

node *index(node *root, int val)
{
	if(root!=NULL)
	{
		if(root->data==val)
		{
			cout<<root->p<<endl;
			//return;
		}
		if((root->data)>val)
		{
			index(root->left,val);
		}
		else if((root->data)<val)
		{
			index(root->right,val);
		}
	}
}
node *deleteNode(node *root, int data)
{
	if(root==NULL)
	{
		return root;
	}
	if((root->data)>data)
	{
		root->left=deleteNode(root->left,data);
	}
	else if((root->data)<data)
	{
		root->right=deleteNode(root->right,data);
	}
	else
	{
		if(root->left==NULL)
		{
			node *temp=root->right;
			return temp;
		}
		else if(root->right==NULL)
		{
			node *temp=root->left;
			return temp;
		}
		node *temp = minimum(root -> right);
		root->data=temp->data;
		root->right=deleteNode(root->right,temp->data);
	}
return root;
}

int main()
{
	int total, ele;
	char i;
	node *root = NULL;
	cin>>total;

	while(total--)
	{
		cin>>i;
		cin>>ele;
		if(i == 'i')
		{
			root = insert(root, ele, 1);
		}
		else
		{
			index(root, ele);
			root = deleteNode(root, ele);
		}
	}
return 0;
}
