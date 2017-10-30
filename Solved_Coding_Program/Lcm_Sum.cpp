#include<bits/stdc++.h>
using namespace std;
//#define t 300000
//#define m 999999
long int totient_function(long int n){

   long int phi=n;

	for(long int p=2;p*p<=n;p++){

            if(n%p==0){
                while(n%p==0)
                n/=p;

                phi=phi-phi/p;
              }

	}

	if(n>1)
	   phi=phi-phi/n;

	return phi;

}


int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

long long int answer=0,t;
cin>>t;
long int a[t];

for (int i = 0; i < t; ++i){
  cin>>a[i];
}

for (int i = 0; i < t; ++i){

 answer= totient_function(a[i]);
 answer*=a[i];
 answer*=a[i];
 answer/=2;
 answer+=a[i];

 cout<< answer<<endl;
}

/*for(int i=1;i<=t;i++){

  answer= totient_function(i);
  answer*=i;
  answer*=i;
  answer+=i;
  //printf("%d\n",answer);
  cout<<answer<<endl;
}

answer = totient_function(m);
answer*=m;
answer*=m;
answer+=m;

cout<<answer<<endl;
*/
}
