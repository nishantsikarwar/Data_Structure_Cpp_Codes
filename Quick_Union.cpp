#include<bits/stdc++.h>
using namespace std;

#define objects 10
int id[objects],sz[objects];

int find_root(int i){

  while(i!=id[i]){

		//id[i]=id[id[i]];
		i=id[i];
     }

 return i;

}


void quick_union(int connections[][2],int n){

  for (int i = 0; i < objects; ++i){

	id[i]=i;
	sz[i]=1;
   }

for (int i = 0; i < n; ++i){

	int p=find_root(connections[i][0]);
	int q=find_root(connections[i][1]);

	if(sz[p]<sz[q]){

       id[p]=q;
       sz[q]+=sz[p];

	}else{

   id[q]=p;
   sz[p]+=sz[q];

  }

}

}
bool find_union(int p,int q){

	return find_root(p)==find_root(q);
}

int main(){

	int n;
	cin>>n;

	int connections[n][2];

	for (int i = 0; i < n; ++i)
	  cin>>connections[i][0]>>connections[i][1];

	quick_union(connections,n);
//	int p,q;
//	cin>>p,q;
	for (int i = 0; i < objects; ++i)
		cout <<id[i]<<endl;
	
	//cout<<find_union(p,q);
}