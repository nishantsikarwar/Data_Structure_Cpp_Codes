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
	int value;
	struct node *link;
}node;

node *front = NULL, *rear = NULL;
bool empty()
{
	return (front == NULL);
}

void enqueue(int value)
{

	node *newnode = (node *)malloc(sizeof(node));
	newnode->value = value;
	newnode->link = NULL;

	if (newnode == NULL)
	{
		printf("Memory is not allocated\n");
		return;
	}
	if (front == NULL)
	{
		front = newnode;
		rear = newnode;
	}
	else
	{
		rear->link = newnode;
		rear = newnode;
	}
	printf("%d inserted in the queue\n", value);

}

void dequeue()
{

	int value;
	if(empty())
	{ 
		printf("queue is empty\n");
		return;
	}
	 value = front->value;
     printf("Element deleted is %d\n", value);
     front = front->link;
}

void display()
{
   node *tmp = front;
	while(tmp!=NULL)
	{
		printf("%d\n", tmp->value);
		tmp = tmp->link;
	}
}


int main (void)
{
	speed
	ONLINE_JUDGE
	dequeue();
	enqueue(15);
	enqueue(49);
	enqueue(54);
	enqueue(2);
	enqueue(97);
	display();
	dequeue();
	dequeue();
	display();
	printf("%s\n", "HELLO_WORLD!!!!");
	return 0;
}
