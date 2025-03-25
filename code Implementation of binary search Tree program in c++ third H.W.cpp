#include<bits/stdc++.h>
using namespace std;
class Tree
{
	public:
	  int data;
	  Tree *left =NULL, *right = NULL;
	  // constructor initialised 
	   Tree (int x)
	   {
	   	data = x;
	   	left = NULL;
	   	right = NULL;
	   }
};

int search (Tree * root, int value)
{
  while (root != NULL)
  { 
   if (value > root->data)
    root = root->right;
    else if( value < root->data)
    root = root->left;
    else 
    return 1;
  }
  return 0;
}

void inorder_traversal (Tree *root)
{
  if(root == NULL)
  return;
  inorder_traversal (root->left);
  cout<< root->data << " ";
  inorder_traversal (root->right);
}

Tree *insert_node (Tree * root, int x)
{
 if(root == NULL)
 {
   Tree *temp = new Tree (x);
   return temp;
  } 
  
 if(root->data > x) 
 {
 	root->left = insert_node (root->left, x);
  } 
  else
  {
  	root->right = insert_node (root->right, x);
  }
  return root;
}
Tree *Delete (Tree * root, int x)
{
 if (root == NULL)
 {
 cout << "Node not found ";
 return NULL;
 }
 if (root->data > x)
  {
  	root->left = Delete (root->left, x);
  }
  else if (root->data < x)
  {
  	root->right = Delete (root->right, x);
  }
  else
  {
  	
  if (root->left == NULL)
  {
   Tree *temp = root ->right;
   free (root);
   return temp;
  }
  else if (root->right == NULL)
   {
   	Tree *temp = root ->left;
   	free (root);
   	return temp;
   }
   else
   {
   	
   	Tree *temp = root->right;
   	while (temp->left != NULL)
   	temp = temp->left;
   	
  root->data = temp->data;
  root->right = Delete (root->right, temp->data);
   }
  }
  return root;
}
int main ()
{
 Tree *root  = new Tree (15);
 root->left = new Tree (13);
 root->right = new Tree (18);
 root->left->left = new Tree (8);
 root->left->right = new Tree (14);
 root->right->left = new Tree (16);
 root->right->right = new Tree (19);
 int delete_item = 18;
 cout << "Inorder Traversal :";
 inorder_traversal (root);
 cout<< endl;
 cout<< endl;
 cout<< "17 inserted \n";
 insert_node(root, 17);
 cout << "Inorder Traversal :";
 inorder_traversal (root);
 cout << endl;
 cout << endl;
 
 cout << "18 deleted \n";
 Delete (root, delete_item);
 cout << "Inorder Traversal :";
 inorder_traversal (root);
 cout << endl;
 cout<< "Searching for elements 15 \n";
 cout << search (root, 15);
}
