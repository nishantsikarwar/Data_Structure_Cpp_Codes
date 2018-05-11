#include <bits/stdc++.h>
using namespace std;
#define for(i,x,y) for (int i = x; i <= y; ++i)
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define input 
#define vlong long long 
#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);

struct node
{
	int data;
	struct node *next;
}*root;

struct node* create_node(int value)
{
	struct node *new_node = (struct node *)malloc(sizeof(struct node));
	new_node->data;
	new_node->next = NULL;
	return new_node; 
}

bool empty(struct node *root)
{
	return !root;
}




void push (struct node **root,int value)
{
	struct node *new_node = create_node(value);
	new_node->next = *root;
	*root = new_node;
	printf("%d pushed to stack\n", value);
}
void pop(struct node **root)
{
	if(empty(*root))
		return;
	struct node *tmp = *root;
        *root = (*root)->next;
        int value = tmp->data;
        free(tmp);
        	printf("%d poped out of stack\n", value);

        ///return value;

}
int peek(struct node *root)
{
	if(empty(root))
		return INT_MIN;
        
		return root->data;
}
void print_stack(struct node *n)
{
	printf("%d\n", n->data);
	n= n->next;
}

int main (void)
{
	speed
	ONLINE_JUDGE

      root =NULL;
      push(&root,1);
            push(&root,2);
                  pop(&root);
                  pop(&root);
printf("%d\n", peek(root));

//	printf("%s\n", "HELLO_WORLD!!!!");
	return 0;
}
