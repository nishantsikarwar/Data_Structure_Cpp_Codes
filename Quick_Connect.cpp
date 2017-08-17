#include <bits/stdc++.h>
using namespace std;

#define objects 10
int id[objects];

void quick_connect(int connections[][2],int n){

	int index=0,connect=0;

	for (int i = 0; i <n ; ++i)
		id[i]=i;

	
	for (int i = 0; i < n; ++i){

		connect=id[connections[i][0]];
		index=id[connections[i][1]];

		int j=0;

		while(j<n){

 			if(id[j]==index)
				id[j]==connect;
			j++;
		}
	}

}

int main(){

	int n;
	cin>>n;

	int connections[n][2];

	for(int i=0;i<n;i++)
	cin>>r[i][0]>>r[i][1];

	quick_connect(r,n);

	return 0;
}

