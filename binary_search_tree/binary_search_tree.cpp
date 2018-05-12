#include <bits/stdc++.h>
using namespace std;
#define for(i,x,y) for (int i = x; i <= y; ++i)
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define input 
#define vlong long long 
#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);
typedef struct node
{
  struct node *left, *right;
   int data;
}node;

node *create_node(int value)
{
	node *n = (node *)malloc(sizeof(node));
	n->left = NULL;
	n->right = NULL;
	n->data = value;
}

void insert(node *root, int value)
{
	if(value <= root->data)
	{
		if(root->left == NULL)
			root->left = create_node(value);
        else
            insert(root->left, value);

	} 
	else
	{
		if(root->right == NULL)
			root->right = create_node(value);
		else
			insert(root->right, value);

	}

}
bool find(node *root, int value)
{
   if(value == root->data)
   	return true;

    if(value <= root->data)
   	 {
   	 	if(root->left)
   	 		return find(root->left, value);
   	 	else
   	 		return false;
   	 }
   	 else
   	 {
   	 	if(root->right)
   	 		return find(root->right, value);
   	 	else
   	 		return false;
   	 }
}

void print_in_order(node *root)
{
   if(root->left)
   	print_in_order(root->left);
   printf("%d\n", root->data);
   if(root->right)
   	print_in_order(root->right);
}

int main (void)
{
	speed
	ONLINE_JUDGE
	node *root = create_node(10);
	insert(root, 5);
	insert(root, 8);
	insert(root, 15);
print_in_order(root);
	printf("%s\n", "HELLO_WORLD!!!!");
	return 0;
}
