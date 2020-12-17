#include<iostream>
using namespace std;

struct node{
	int data; 
	node* left;
	node* right;
};

node* GetNewNode(int data) {
	node* newNode = new node();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

node* insert(node* root,int data) {
	if(root == NULL) 
	root = GetNewNode(data);

	else if(data <= root->data) 
	root->left = insert(root->left,data);

	else 
	root->right = insert(root->right,data);
	return root;
}

bool Search(node* root,int data) {
	if(root == NULL) {
		return false;
	}
	else if(root->data == data) {
		return true;
	}
	else if(data <= root->data) {
		return Search(root->left,data);
	}
	else {
		return Search(root->right,data);
	}
}
int main() {
	node* root = NULL; 
	int num;
	cin>>num;
	for(int i=0;i<num;i++)
	{
	int val;
	cin>>val;
	root = insert(root,val);
	}	    
 
	int number;
	cin>>number;
	if(Search(root,number) == true) 
	cout<<"Found"<<endl;
	else 
	cout<<"Not Found"<<endl;
}