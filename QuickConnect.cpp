#include <bits/stdc++.h>
using namespace std;
#define objects 10
int id[objects];
void Qiuckconnect(int r[][2],int n)
{
	int index=0,connect=0;
	for (int i = 0; i <n ; ++i)
	{
		/* code */
		id[i]=i;
	}
	for (int i = 0; i < n; ++i)
	{
		/* code */
		connect=id[r[i][0]];
		index=id[r[i][1]];
		int j=0;
		while(j<n)
		{
 			if(id[j]==index)
				id[j]==connect;
			j++;
		}
	}

}

int main()
{
	/* code */
	int n;
	cin>>n;
	int r[n][2];
	for(int i=0;i<n;i++)
	cin>>r[i][0]>>r[i][1];
	Qiuckconnect(r,n);	
	return 0;
}

