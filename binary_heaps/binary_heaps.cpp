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
	int limit, *a, root,size;
}heaps;

heaps *create_heaps(int root, int limit)
{
   heaps *pq = (heaps *)malloc(sizeof(heaps));
   pq->root = root;
   pq->limit = limit;
   pq->size = 1;
   pq->a = (int *)malloc(limit*sizeof(int));
   return pq;
}
bool full(heaps *pq)
{
	return pq->size == pq->limit;
}

void restore_heap(heaps *pq, int k)
{
   int tmp = k/2;
    while(tmp>=0)
    {
    	if(a[tmp]>=a[k])
    		break;
    	swap(a[tmp],a[k]);
    	tmp>>1;
    }

}

void insert_key(heaps *pq, int value)
{
    if(full(pq))
    return;
a[pq->size] = value;
pq->size = pq->size+1;
restore_heap(pq,pq->size);

}

int main (void)
{
	speed
	ONLINE_JUDGE
	printf("%s\n", "HELLO_WORLD!!!!");
	return 0;
}
