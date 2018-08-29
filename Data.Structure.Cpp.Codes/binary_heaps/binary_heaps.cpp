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
	int limit, *a, index;
}heaps;

// typedef struct node
// {
// 	int data;
//     struct node *parent, *left, *right;	
// }node;

// node *create_node(int value)
// {
// 	node *n = (node *)malloc(sizeof(node));
// 	n->data = value;
// 	n->left = NULL;
// 	n->right = NULL;
// 	n->parent = NULL;
// }

// void restore_heap(node *n)
// {

// } 

// void insert_node(node *leaf , node* n)
// {
//       if(leaf->left == NULL)
//       {
//       	left->left = n;
//       	restore_heap(n);
//       } 
//       else
//       {
//            leaf->right = NULL;
//            restore_heap(n);
//       }

// }

heaps *create_heaps(int limit)
{
   heaps *pq = (heaps *)malloc(sizeof(heaps));
   pq->limit = limit;
   pq->index = -1;
   pq->a = (int *)malloc(limit*sizeof(int));
   return pq;
}

bool full(heaps *pq)
{
	return pq->index == (pq->limit-1);
}

int parent(int i)
{
	return (i-1)/2;
}
int left(int i)
{
   return 2*i+1;
}

int right(int i)
{
	return 2*i+2;
}

void insert_key(heaps *pq, int value)
{
    if(full(pq))
    return;

  pq->index = pq->index + 1;
  pq->a[pq->index] = value;
  int i = pq->index;
  
  while(i!=0 && pq->a[parent(i)] < pq->a[i])
   {
     swap(pq->a[i],pq->a[parent(i)]);
     i = parent(i); 
   }
    printf("%d is inserted in the heap\n",value);
}

int  delete_max(heaps *pq)
{
     swap(pq->a[0],pq->a[pq->index]);
     int value = pq->a[pq->index];
     pq->a[pq->index] = INT_MIN;
     pq->index = pq->index - 1;
     int i = 0;

    while(i <= pq->index)
    { 
      if(pq->a[i] > max(pq->a[left(i)], pq->a[right(i)])) 
       	break;

        if(pq->a[right(i)] > pq->a[left(i)])
          	{	
          		swap(pq->a[i], pq->a[right(i)]);
          		i = right(i);
          	}

          else
          	{
          		swap(pq->a[i], pq->a[left(i)]);
          		i = left(i);
          	}

    }
    printf("%d is deleted from the heap\n",value);
     return pq->a[0];
}

void print_in_order(heaps *pq, int i)
{
   if(left(i) <= pq->index)
   	  print_in_order(pq, left(i));

   printf("%d\n",pq->a[i]);

  if(right(i) <= pq->index)
     print_in_order(pq, right(i));

}

int main (void)
{
	speed
	ONLINE_JUDGE
	heaps *pq = create_heaps(5);
	insert_key(pq, 15);
	insert_key(pq, 8);
	insert_key(pq, 10);
	print_in_order(pq, 0);
//	printf("%d\n", delete_max(pq));
//	printf("%s\n", "HELLO_WORLD!!!!");
	return 0;
}
