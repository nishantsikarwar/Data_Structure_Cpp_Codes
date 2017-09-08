#include <bits/stdc++.h>
#define m 1000000007
using namespace std;

int main()
{
	long long int base,exponent,power_index=0,mod=1;

	cout <<"enter the base"<<endl;
	cin>>base;

	cout <<"enter the exponent"<<endl;
	cin>>exponent;

	while (exponent>0){

		int index=exponent%2;
		exponent=exponent/2;
		power_index++;

		if (index!=0){

			base=base%m;

			for (int j=0;j<power_index-1;j++){

				base=(base*base);
				base=base%m;
			}

		  mod=(mod*base)%m;
		  
		}
	}
	cout << " modulo is "<< mod;
	return 0;
}
