
#include<bits/stdc++.h>
using namespace std;
#define n 1000000
//map<long, long>sieve;
int main()
{
	 vector<bool>sieve(n);
	sieve[0]=sieve[1]=1;
	for(unsigned long a=2;a<n;a++)
	{
		if(sieve[a]==0)
		{
			for(unsigned long b=a*a;b<n;b+=a)
				sieve[b]=1;
		}
	}

	/*for(unsigned long a=0;a<n;a++)
	{
		if(sieve[a]==0)
		cout<<a<<"___";
	}*/
	//system("end");

}
