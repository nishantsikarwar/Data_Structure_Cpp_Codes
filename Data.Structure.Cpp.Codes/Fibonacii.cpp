#include <iostream>
#include <map>
using namespace std;
#define M 1000000007
map<long, long> F;
long int i=0;
long long int  f(long long int n) {
	if (F.count(n))
	 return F[n];
	long int  k=n/2;
	if (n%2==0)
	{
		return F[n] = (f(k)*f(k) + f(k-1)*f(k-1)) % M;

	}
	else
	{
		return F[n] = (f(k)*f(k+1) + f(k-1)*f(k)) % M;
	}
}


long long int  nearest_fibonacci (int n)
{

	if(n==1)
	return f(i+1);
	else if (n<=0)
	return f(i);                                          // Find the Nearest Fibonacci
	else
	{
	    i++;
      	return nearest_fibonacci(n-f(i-1));
         }
}

int main()
{
	long int  n;
	cin>>n;
	F[0]=1;F[1]=1;
    cout <<f(n-1)<< endl<<nearest_fibonacci(n);
    return 0;
}
