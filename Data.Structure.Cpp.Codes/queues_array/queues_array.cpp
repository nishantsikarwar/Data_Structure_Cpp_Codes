#include <bits/stdc++.h>
using namespace std;
#define for(i,x,y) for (int i = x; i <= y; ++i)
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define input 
#define vlong long long 
#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);

typedef struct Queue
{
	int front ,rear ,size;
	int *array;
	int limit;
}Queue;

Queue *create_queue( int limit)
{

	Queue *queue = (Queue *)malloc(sizeof(Queue));
	queue->limit = limit;
	queue->front = queue->size = 0;
	queue->rear = limit-1;
	queue->array = (int *)malloc(sizeof(int)*queue->limit);
	return queue;
}

int full(Queue *q)
{
    return(q->size == q->limit);
}
int empty(Queue *q)
{
	return (q->size == 0);
}

void enqueue(Queue *q, int value)
{

   if(full(q))
   	return;
   q->rear = (q->rear+1)%q->limit;
   q->array[q->rear] = value;
   q->size = q->size+1;
   	printf("%d enqueued to queue\n", value);

}

void dequeue(Queue *q)
{
  if(empty(q))
  	return;
  int value = q->array[q->front];
  q->front = (q->front+1)%q->limit;
  q->size = q->size-1;
     	printf("%d dequeued to queue\n", value);
}

int main (void)
{
	speed
	ONLINE_JUDGE

	Queue* q= create_queue(10);

	enqueue(q, 5);
	enqueue(q, 7);
	enqueue(q, 23);
	enqueue(q, 67);
	dequeue(q);
	dequeue(q);
	printf("%s\n", "HELLO_WORLD!!!!");
	return 0;
}
