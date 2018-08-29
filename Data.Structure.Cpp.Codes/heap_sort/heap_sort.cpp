#include <bits/stdc++.h>
using namespace std;
//#define For(i,x,y) for (int i = x; i <= y; ++i)
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define input 100
#define vlong long long 
#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);
typedef struct node
{
	int *a,limit,index;
}heap;
 
 heap *create_heap(int limit)
 {
 	heap *hp = (heap *)malloc(sizeof(heap));
 	hp->limit = limit;
 	hp->index =-1;
 	hp->a = (int *)malloc(sizeof(int)*limit);
 	return hp;
 }


 int left(int i)
 {
 	return 2*i+1;
 }
 int right(int i)
 {
 	return 2*i+2;
 }
 int parent(int i)
 {
 	return (i-1)/2;
 }

 bool full(heap *hp)
 {
 	return hp->index == (hp->limit-1);
 }
 void sink(heap *hp, int i)
 {
     while(i <= hp->index)
     {
     	 if(hp->a[i] > max(hp->a[left(i)], hp->a[right(i)]))
     	break;
      if(hp->a[right(i)] > hp->a[left(i)])
          	{	
          		swap(hp->a[i], hp->a[right(i)]);
          		i = right(i);
          	}

          else
          	{
          		swap(hp->a[i], hp->a[left(i)]);
          		i = left(i);
          	}
     }
     return;
 }

void build_heap(heap *pq)
{
	int n = pq->limit;
   for(int k = n/2; k>=0; k++)
   	sink(pq, k);
}

 void insert(heap *hp, int value)
 {
 	if(full(hp))
 		return;
 	hp->index = hp->index+1;
 	hp->a[hp->index] = value;
 }

int main (void)
{
	speed
	ONLINE_JUDGE

	printf("%s\n", "HELLO_WORLD!!!!");
	return 0;
}
