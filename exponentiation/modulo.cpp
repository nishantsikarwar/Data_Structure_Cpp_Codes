#include <bits/stdc++.h>
using namespace std;
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define vlong long long 
#define endl "\n"
// #define base 1007
#define m 103
#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);

int exponentiation(vlong int base, vlong int exponent)
{
	vlong int mod=1;
 base = base%m;

	while (exponent>0){

		if(exponent&1)
			mod = (mod*base)%m;


		exponent = exponent>>1;
		base = (base*base)%m;
		}
	
	return mod;
}

int cyclicity(vlong int base)
{
	base = base%m;
 vlong int c = 0, i=1;
 int tmp = 1;
   while(tmp != base)
   {
   	i++,c++;
        tmp = exponentiation(base, i);
        
   }
   return ++c;
}

int main()
{
	ONLINE_JUDGE
	vlong int base, exponent;
	// cout <<"enter the exponent"<<endl;
	cin>>base>>exponent;

	cout << " cyclicity is "<<cyclicity(base)<<endl;
	cout<<" modulo is "<<exponentiation(base, exponent)<<endl;
	return 0;
}

