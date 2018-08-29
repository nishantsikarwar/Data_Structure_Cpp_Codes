#include<bits/stdc++.h>
using namespace std;
#define input 10000000

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

	//long int input;
	//cin>>input;

	 for(int i=2;i<=input;i++)
	 totient_function(i);
}
