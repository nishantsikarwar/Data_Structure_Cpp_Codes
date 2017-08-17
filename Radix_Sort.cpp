#include <bits/stdc++.h>
using namespace std;
#define range 100
int rs[5][2];
int getMax(int a[],int n)
{
	int max=a[0];
	for (int i = 1; i < n; ++i)
	{
		/* code */
		if(max<a[i])
			max=a[i];
	}
	return max;
}


void countSort(int rs[][2],int n)
{
    int s[10]={0},cs[n][2];
    for (int i = 0; i <n; ++i)
    {
    	/* code */
    	
    	s[rs[i][0]]+=1;
    }
    for (int i = 1; i < 10; ++i)
    {
    	/* code */
    	s[i]+=s[i-1];
    }
    int j=0;
    for (int i = 0; i <n; ++i)
    {
    	/* code */
    	cs[s[rs[i][0]]-1][0]=rs[i][0];
        cs[s[rs[i][0]]-1][1]=rs[i][1];
    	s[rs[i][0]]-=1;
         
    }
    for (int i = 0; i < n; ++i)
    {
    	/* code */
    	rs[i][1]=cs[i][1];
    }
}



void Radixsort(int a[],int n)
{
	int m=getMax(a,n);
	for (int i = 0; i < n; ++i)
	{
		/* code */
		rs[i][1]=a[i];
	}



	//while(m)
	//{
 // for (int i = 0; i < n; ++i)
  //{
  	/* code */
  	//rs[i][0]=a[i]%10;
  	//a[i]/=10;
  //}
  //countSort(rs,n);
  //m/=10;

   //}
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>a[i];
	}
	
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout <<rs[i][1]<<endl;
	}

}
