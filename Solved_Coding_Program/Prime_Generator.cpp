#include<bits/stdc++.h>
using namespace std;
#define len 40000
//#define beg 1000000000
//#define fnl  10001000000
bool sieve [len];
//bool futher_sieve[fnl-beg]={0};
int main(){

ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

int beg,fnl;
cin>>beg>>fnl;

long int size_of_array=fnl-beg;

bool futher_sieve[size_of_array]={0};

sieve[0]=sieve[1]=1;
	for(unsigned long a=2;a<len;a++)
	{
		if(sieve[a]==0)
		{
			for(unsigned long b=a*a;b<len;b+=a)
				sieve[b]=1;
		}
	}

   long int i;
       if(beg>=len){
    for(int j=2;j<len;j++){

               if(sieve[j]==0){
    	if(beg%j==0)
    		i=beg;
    	else
    		i=j*((beg/j)+1);

    	while(i<fnl){

    		i+=j;
    		futher_sieve[i-beg]=1;

    	}
    }

     }       
       }
           

           for(int i=0;i<size_of_array;i++)
           	cout<<futher_sieve[i]<<endl;

       }







