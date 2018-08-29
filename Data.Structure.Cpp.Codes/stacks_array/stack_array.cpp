#include <bits/stdc++.h>
using namespace std;
#define for(i,x,y) for (int i = x; i <= y; ++i)
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define input 
#define vlong long long 
#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);
#define MAX 100

struct node
{
	int limit;
	int *array;
	int top;
};

struct node* create_stack(int limit)
{
  //  int *data = (int *)malloc(sizeof(int)*limit);
    struct node *stack_node = (struct node*)malloc(sizeof(struct node));
   // struct node *stack_node;
    stack_node->limit = limit;
    stack_node->top = -1;
    stack_node->array = (int *)malloc(stack_node->limit*sizeof(int));
    return stack_node;
}

bool full(struct node *n)
{
	return n->top == n->limit-1;
}
bool empty (struct node *n)
{
	return n->top == -1;
}

void push(struct node *n, int data)
{
	if(full(n))
		return;
	n->array[++n->top] = data;
	printf("%d pushed to stack\n", data);
}

int  pop(struct node *n)
{
	if(empty(n))
		return INT_MIN;
	return n->array[n->top--];
	 //printf("%d poped out of stack\n", data);

}

int main (void)
{
	speed
	ONLINE_JUDGE
struct node* n = create_stack(5);
push(n,1);
push(n,2);
push(n,3);
printf("%d\n", pop(n));
	printf("%s\n", "HELLO_WORLD!!!!");
	return 0;
}
