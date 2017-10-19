#include<bits/stdc++.h>
using namespace std;
#define input 100

 long int g[input+1]={0};

int sum_of_totients(int n){

  for(int i =1;i<=n;i++){
  	g[i]=i;
  }

  for (int k = 1; k <= n; ++k){

  	for (int l = 2*k; l <=n ;l+=k){
        g[l]-=g[k];
  	}
  	g[k]+=g[k-1];
  }

  return g[n];

}


int main(){

	cout<<sum_of_totients(input)<<endl;

}
