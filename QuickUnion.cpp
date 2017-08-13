#include<bits/stdc++.h>
using namespace std;
#define objects 10
int id[objects],sz[objects];

int findroot(int i)
{
while(i!=id[i])
	{
		//id[i]=id[id[i]];
		i=id[i];
	}
return i;
}


void QuickUnion(int r[][2],int n)
{
for (int i = 0; i < objects; ++i)
{
	/* code */
	id[i]=i;
	sz[i]=1;
}
for (int i = 0; i < n; ++i)
{
	/* code */
	int p=findroot(r[i][0]);
	int q=findroot(r[i][1]);
	if(sz[p]<sz[q])
	{
       id[p]=q;
       sz[q]+=sz[p];
	}
  else
  {
   id[q]=p;
   sz[p]+=sz[q];
  }

}

}
bool findunion(int p,int q)
{
	return findroot(p)==findroot(q);
}

int main()
{
	int n;
	cin>>n;
	int r[n][2];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>r[i][0]>>r[i][1];
	}
	QuickUnion(r,n);
//	int p,q;
//	cin>>p,q;
	for (int i = 0; i < objects; ++i)
	{
		/* code */
		cout <<id[i]<<endl;
	}
	cout<<findunion(p,q);
}