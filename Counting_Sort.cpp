#include <bits/stdc++.h>
using namespace std;
#define range 100
void CountingSort(int a[],int r,int n)
{
    int s[r+1]={0},cs[n];
    for (int i = 0; i <n; ++i)
    {
    	/* code */
    	
    	s[a[i]]+=1;
    }
    for (int i = 1; i < r+1; ++i)
    {
    	/* code */
    	s[i]+=s[i-1];
    }
  //  int j=0;
    for (int i = 0; i <n; ++i)
    {
    	/* code */
    	cs[s[a[i]]-1]=a[i];
    	s[a[i]]-=1;
         
    }
    for (int i = 0; i < n; ++i)
    {
    	/* code */
    	a[i]=cs[i];
    }
}
int main()
{
	/* code */
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>a[i];
	}
	CountingSort(a,range,n);
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout <<a[i]<<endl;
	}


	return 0;
}