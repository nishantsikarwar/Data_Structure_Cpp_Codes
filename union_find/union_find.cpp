#include <bits/stdc++.h>
using namespace std;
#define for(i,x,y) for (int i = x; i <= y; ++i)
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define input 10
#define vlong long long 
#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);
int id[input]={0};
int sz[input]={0};
int root(int i)
{
	while(i!=id[i])
	{
		id[i] = id[id[i]];  //path_compression
		i=id[i];
	}
	return i;
}

bool connected(int p, int q)
{
	return root(p)==root(q);
}
void quick_set()
{

	for(i,0,input-1)
		id[i]=i;

}

// void union_find (int p, int q)
// {
// 	int pid = id[p];
// 	int qid = id[q];
// 	for(i,0,input-1)
// 	{
// 		if(id[i]==pid)
// 			id[i]=qid;
// 	}
// }

void quick_union(int p, int q)
{
 int i = root(p);
 int j = root(q);
 id[i] = j;

}


void weighted_quick_union(int p, int q)
{
	 int i = root(p);
     int j = root(q);
     if(i == j)
     	return;
     if(sz[i]<sz[j])
     	{
     		id[i]=j;
     		sz[j]+=sz[i];
     	}
     else
     	{
     		id[j]=i;
     		sz[i]+=sz[j];
     	}

     id[i] = j;

}
void print()
{
	for(i,0,input-1)
	printf("%d\n", id[i]);
}
int main (void)
{
	speed
	ONLINE_JUDGE
memset(sz,1,sizeof(sz));
	quick_set();

	printf("%s\n", "HELLO_WORLD!!!!");
	return 0;
}
