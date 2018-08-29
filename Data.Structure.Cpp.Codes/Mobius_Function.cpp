#include<bits/stdc++.h>
using namespace std;

#define endl '\n'

#define input 50

int mobius_function(long int n){
   
   int mu =-1;

  for(int i=2;i*i<=n;i++){

  	   if(n%i==0){
            
          n/=i;
          if(n%i==0)
          	return 0;
          else
          	mu*=(-1);

  	   }

  }

  return mu;

}

int main(){

 ios_base::sync_with_stdio(false);
 cin.tie(0);cout.tie(0);

 //long int n;
 //cin>>n;

 cout<<mobius_function(input);endl;

}