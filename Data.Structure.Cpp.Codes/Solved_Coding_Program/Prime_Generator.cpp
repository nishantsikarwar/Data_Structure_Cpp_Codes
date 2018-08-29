#include<bits/stdc++.h>
using namespace std;
#define len 40000
#define beg 10000000000
#define fnl 10000100000
bool sieve [len]={0};


void cal_prime(){

	sieve[0]=sieve[1]=1;
	for(unsigned long a=2;a<len;a++) {
		if(sieve[a]==0) {

		  	for(unsigned long b=a*a;b<len;b+=a)
				sieve[b]=1;
		}

    }
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

//long int beg,fnl;
//cin>>beg>>fnl;
 cal_prime();
 int size_of_array=fnl-beg+1;

vector<bool> futher_sieve(size_of_array);

/*for (long int i = 0; i <size_of_array ; ++i)
	futher_sieve[i]=i+beg;
*/

           long int j,temp;

       for(int i=2;i<len;i++){

            if(sieve[i]==0) {

    	       if(beg%i==0) {

                    j=beg/i;
    	       }

    	       else {
    		       j=beg/i+1;
    	       }

    		   if(j<i) {

    		   	j=i;
    		   	
    		   }

    		    temp=i*j;

    	    while(temp<=fnl) {
    		    
    		   futher_sieve[temp-beg]=1;
    		   j++;
    		   temp=i*j;
    	 }
    }
}

         for(int i=0;i<size_of_array;i++)
             if(futher_sieve[i]==0)
                cout<<i+beg<<endl;

}








